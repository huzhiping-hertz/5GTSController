#include "rmtpserver.h"
#include "rmtpcmd.h"
#include "rmtpcmdfactory.h"
#include "rmtpcmdfixdfparam.h"
#include "gtsclient.h"

#include <QDebug>
#include <QHostAddress>
#include <QAbstractSocket>
#include <string>
using namespace  std;

RmtpServer::RmtpServer(QObject *parent) : QObject(parent)
{

}

QString RmtpServer::Start(QString ip,qint32 port)
{
    QString rs="";
    connect(&tcpserver,SIGNAL(newConnection()),this,SLOT(on_newclient_connected()));
    if(tcpserver.listen(QHostAddress(ip),port))
    {
        rs="RmtpServer Start Listening...";
    }
    else
    {
        rs="RmtpServer Listening failed...";
    }

    return rs;
}

void RmtpServer::Stop()
{
    tcpserver.close();
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
    QTcpSocket* socketPtr = static_cast<QTcpSocket*>(QObject::sender());
    QByteArray datas = socketPtr->readAll();
    //Receive rmtp cmd;
    //Convert to JSON
    RmtpCmdFactory factory;
    shared_ptr<RmtpCmd> cmdptr=factory.CreateCmd(QString(datas));
    QByteArray rs=cmdptr->GetResponse();
    socketPtr->write(rs.toStdString().c_str(),rs.length());

    auto ptr=dynamic_pointer_cast<RmtpCmdFixDFParam>(cmdptr);
    if(ptr!=NULL)
    {
        emit signal_FIXDF(ptr);
    }

}

void RmtpServer::on_state_changed(QAbstractSocket::SocketState socketState)
{
    if (socketState == QAbstractSocket::UnconnectedState)
    {
        QTcpSocket* sender = static_cast<QTcpSocket*>(QObject::sender());
        clientSocketList.removeOne(sender);
    }
}
