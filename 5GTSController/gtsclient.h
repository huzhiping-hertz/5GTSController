#ifndef GTSCLIENT_H
#define GTSCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QByteArray>

#include "gtscmd.h"

class GtsClient : public QObject
{
    Q_OBJECT
public :
    QTcpSocket tcpsocket;
public:
    explicit GtsClient(QObject *parent = nullptr);
    bool ConnectDevice(QString ip , qint32 port);
    void DisConnectDevice();
    QString SendCmd(QByteArray rs);
signals:
    void signal_device_disconnected();
    void signal_device_connected();
    void signal_device_response(QString response);
public slots:
    void on_state_change(QAbstractSocket::SocketState state);
    void on_ready_read();
};

#endif // GTSCLIENT_H
