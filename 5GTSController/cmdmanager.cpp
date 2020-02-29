#include "cmdmanager.h"
#include <QString>
#include <cmdrmtp.h>
#include <cmdgts.h>
#include <QTcpServer>
#include<QObject>
#include<QDebug>

CmdManager::CmdManager(QObject *parent):QObject(parent)
{
    connect(&tcpserver,SIGNAL(newConnection()),this,SLOT(On_ClientConnected()));
}

CmdManager::~CmdManager()
{
    delete socketptr;
}

QString CmdManager::Start()
{
    QString rs;

    if(tcpserver.listen(QHostAddress::Any,5000))
    {
        rs="Start Listening...";
    }
    else
    {
        rs="Listening failed...";
    }
    return rs;
}

void CmdManager::On_ClientConnected()
{
    socketptr=tcpserver.nextPendingConnection();
    socketptr->write("hello world \r\n");
    socketptr->flush();
    socketptr->close();
}

CmdGTS CmdManager::CmdParse(CmdRMTP rmtp)
{
    CmdRMTP rm=rmtp;
    CmdGTS gts;
    return gts;
}

QString CmdManager::SendCmd()
{
    return "";
}
