#include "gtsclient.h"
#include "gtscmdfactory.h"

#include <QDebug>

GtsClient::GtsClient(QObject *parent) : QObject(parent)
{

}

bool GtsClient::ConnectDevice(QString ip, qint32 port)
{
    connect(&tcpsocket, SIGNAL(readyRead()), this, SLOT(on_ready_read()));
    connect(&tcpsocket,SIGNAL(stateChanged(QAbstractSocket::SocketState)),this,SLOT(on_state_change(QAbstractSocket::SocketState)));
    this->tcpsocket.connectToHost(ip,port);
    return true;
}

 QString GtsClient::SendCmd(QByteArray rs)
{
    this->tcpsocket.write(rs);
    this->tcpsocket.flush();
    return "";
}

void GtsClient::on_state_change(QAbstractSocket::SocketState state)
{
    if(state==QAbstractSocket::ClosingState)
    {
        emit signal_device_disconnected();
    }
    if(state==QAbstractSocket::ConnectedState)
    {
        emit signal_device_connected();
    }
}

void GtsClient::on_ready_read()
{
    QByteArray response = this->tcpsocket.readAll();
    response.chop(4);
    QByteArray rs=response.remove(0,8);
    emit signal_device_response(QString(rs));
}
