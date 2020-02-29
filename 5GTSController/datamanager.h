#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <QObject>
#include <QTcpSocket>
#include "dataparser.h"
#include "dfdata.h"

class DataManager : public QObject
{
    Q_OBJECT
private:
    QTcpSocket tcpsocket;
    DataParser dataParser;
public:
    explicit DataManager(QObject *parent = nullptr);

    bool ConnectDevice(QString ip,qint32 port);

signals:
    void signal_received_data(DFData);
public slots:
    void on_received_data();
};

#endif // DATAMANAGER_H
