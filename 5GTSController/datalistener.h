#ifndef DATALISTENER_H
#define DATALISTENER_H

#include "dfdata.h"
#include <QObject>
#include <QTcpServer>

class DataListener : public QObject
{
    Q_OBJECT
private:
    QTcpServer tcpserver;
public:
    explicit DataListener(QObject *parent = nullptr);

    QString Start(QString ip,qint32 port);

signals:
    void signal_received_data(DFData data);

public slots:
    void on_ready_read();
    void on_newclient_connected();
};

#endif // DATALISTENER_H
