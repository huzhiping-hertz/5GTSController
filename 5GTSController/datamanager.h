#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <QObject>
#include <QTcpSocket>
#include "dataparser.h"
#include "dfdata.h"
#include "optobj.h"

class DataManager : public QObject
{
    Q_OBJECT
public:
    QTcpSocket tcpsocket;
    DataParser dataParser;
private:
    OptObj optObj;
public:
    explicit DataManager(QObject *parent = nullptr);

    bool ConnectDevice(QString ip,qint32 port);
    void DisConnectDevice();
    void SetOptValue(OptObj opt);
signals:
    void signal_received_data(DFData);
public slots:
    void on_received_data();
};

#endif // DATAMANAGER_H
