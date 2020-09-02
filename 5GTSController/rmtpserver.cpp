#include "rmtpserver.h"
#include "rmtpcmd.h"
#include "rmtpcmdfactory.h"
#include "rmtpcmdfixdfparam.h"
#include "gtsclient.h"
#include "rmtpcmdstop.h"

#include <QDebug>
#include <QHostAddress>
#include <QAbstractSocket>
#include <string>
#include <QDataStream>
#include <QByteArray>
#include <QDateTime>
#include <QFloat16>

using namespace  std;

RmtpServer::RmtpServer(QObject *parent) : QObject(parent)
{
    this->socketPtr=nullptr;
}

QString RmtpServer::Start(QString ip,qint32 port)
{
    QString rs="";

    connect(&tcpserver,SIGNAL(newConnection()),this,SLOT(on_newclient_connected()));
    if(tcpserver.listen(QHostAddress(ip),port))
    {
        rs="<b style='color:#00f'>RmtpServer Start Listening...</b>";
    }
    else
    {
        rs="<b style='color:#f00'>RmtpServer Listening failed...</b>";
    }

    return rs;
}

void RmtpServer::Stop()
{
    //tcpserver.close();
    tcpserver.disconnect();
}

void RmtpServer::on_newclient_connected()
{
    QTcpSocket *clientSocket =tcpserver.nextPendingConnection();

    connect(clientSocket, SIGNAL(readyRead()), this, SLOT(on_ready_read()));
    connect(clientSocket, SIGNAL(stateChanged(QAbstractSocket::SocketState)), this, SLOT(on_state_changed(QAbstractSocket::SocketState)));
    string version="RMTP:VERSION:01.01\n";
    clientSocket->write(version.c_str());
    clientSocketList.push_back(clientSocket);
}

void RmtpServer::on_ready_read()
{
    socketPtr = static_cast<QTcpSocket*>(QObject::sender());
    QByteArray datas = socketPtr->readAll();
    //Receive rmtp cmd;
    //Convert to JSON
    RmtpCmdFactory factory;
    shared_ptr<RmtpCmd> cmdptr=factory.CreateCmd(QString(datas));
    cmdptr->Response(socketPtr);
    //socketPtr->write(rs.toStdString().c_str(),rs.length());

    auto ptr=dynamic_pointer_cast<RmtpCmdFixDFParam>(cmdptr);
    if(ptr!=NULL)
    {
        emit signal_FIXDF(ptr);
    }

    auto stopptr=dynamic_pointer_cast<RmtpCmdStop>(cmdptr);
    if(stopptr!=NULL)
    {
        emit signal_STOP();
    }

}

void RmtpServer::on_get_monitor_data(DFData data)
{
    QByteArray rs;
    QDataStream out(&rs,QIODevice::ReadWrite);
    out.setByteOrder(QDataStream::LittleEndian);

    QDateTime now=QDateTime::currentDateTime();

    qint16 year=now.date().year();
    qint8 month=now.date().month();
    qint8 day=now.date().day();
    qint8 hour=now.time().hour();
    qint8 min=now.time().minute();
    qint8 second=now.time().second();
    qint16 milisecond=1;
    qint8 dataType=0;

    short framelength=24+12;

    float rclevel=data.level;
    float dflevel=data.level;
    float quality=data.quality;
    float degeree=data.bearing;
    float angle=0;
    float compass=0;

    out.setFloatingPointPrecision(QDataStream::SinglePrecision);
    out<<0xeeeeeeee<<framelength<<year<<month<<day<<hour<<min<<second<<milisecond<<dataType<<rclevel<<dflevel<<quality
      <<degeree<<angle<<compass;
    if(this->socketPtr!=nullptr)
    {
        socketPtr->write(rs.toStdString().c_str(),framelength+4);
    }
}

void RmtpServer::on_state_changed(QAbstractSocket::SocketState socketState)
{
    if (socketState == QAbstractSocket::UnconnectedState)
    {
        QTcpSocket* sender = static_cast<QTcpSocket*>(QObject::sender());
        clientSocketList.removeOne(sender);
        emit signal_STOP();
    }
}
