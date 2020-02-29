#ifndef CMDMANAGER_H
#define CMDMANAGER_H

#include<cmdgts.h>
#include<cmdrmtp.h>
#include <QString>
#include <QTcpServer>
#include<QTcpSocket>
#include<QObject>

class CmdManager:public QObject
{
   Q_OBJECT
private:
    QTcpServer tcpserver;
    QTcpSocket *socketptr;
public:
    explicit CmdManager(QObject *parent=0);
    ~CmdManager();
    QString Start();
private:
    CmdGTS CmdParse(CmdRMTP rmtp);
    QString SendCmd();

public slots:
    void On_ClientConnected();

};

#endif // CMDMANAGER_H
