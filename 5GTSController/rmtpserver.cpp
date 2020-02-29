#include "rmtpserver.h"
#include "rmtpcmd.h"
#include "gtscmd.h"
#include "gtsclient.h"

#include <QDebug>
#include <QHostAddress>
#include <QAbstractSocket>

RmtpServer::RmtpServer(QObject *parent) : QObject(parent)
{

}

QString RmtpServer::Start(qint32 port)
{
    QString rs="";
    connect(&tcpserver,SIGNAL(newConnection()),this,SLOT(on_newclient_connected()));
    if(tcpserver.listen(QHostAddress::Any,port))
    {
        rs="RmtpServer Start Listening...";
    }
    else
    {
        rs="RmtpServer Listening failed...";
    }

    return rs;
}

void RmtpServer::on_newclient_connected()
{
    RmtpCmd cmd;
    QTcpSocket *clientSocket =tcpserver.nextPendingConnection();

    connect(clientSocket, SIGNAL(readyRead()), this, SLOT(on_ready_read()));
    connect(clientSocket, SIGNAL(stateChanged(QAbstractSocket::SocketState)), this, SLOT(on_state_changed(QAbstractSocket::SocketState)));

    clientSocketList.push_back(clientSocket);
}

void RmtpServer::on_ready_read()
{
    QTcpSocket* socketPtr = static_cast<QTcpSocket*>(QObject::sender());
    QByteArray datas = socketPtr->readAll();
    //Receive rmtp cmd;
    //Convert to JSON
    RmtpCmd cmd;
    QString parameters=cmd.CmdParse(datas);
    emit signal_received_cmd(parameters);
    qDebug()<<datas;
}

void RmtpServer::on_state_changed(QAbstractSocket::SocketState socketState)
{
    if (socketState == QAbstractSocket::UnconnectedState)
    {
        QTcpSocket* sender = static_cast<QTcpSocket*>(QObject::sender());
        clientSocketList.removeOne(sender);
    }
}
