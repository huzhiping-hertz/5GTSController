#ifndef RMTPSERVER_H
#define RMTPSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include "gtsclient.h"

class RmtpServer : public QObject
{
    Q_OBJECT
private:
    QTcpServer tcpserver;
    QList<QTcpSocket*>  clientSocketList;

public:
    explicit RmtpServer(QObject *parent = nullptr);

    QString Start(qint32 port);


signals:
    void signal_received_cmd(QString cmd);

public slots:
    void on_newclient_connected();
    void on_ready_read();
    void on_state_changed(QAbstractSocket::SocketState socketState);
};

#endif // RMTPSERVER_H
