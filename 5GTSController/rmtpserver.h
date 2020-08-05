#ifndef RMTPSERVER_H
#define RMTPSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QString>
#include "dfdata.h"
#include "gtsclient.h"
#include "rmtpcmdfixdfparam.h"
#include <memory>
using namespace std;
class RmtpServer : public QObject
{
    Q_OBJECT
private:
    QTcpServer tcpserver;
    QList<QTcpSocket*>  clientSocketList;
    QTcpSocket* socketPtr;

public:
    explicit RmtpServer(QObject *parent = nullptr);

    QString Start(QString ip,qint32 port);
    void Stop();


signals:
    void signal_received_cmd(QString cmd);
    void signal_FIXDF(shared_ptr<RmtpCmdFixDFParam> ptr);

public slots:
    void on_newclient_connected();
    void on_ready_read();
    void on_get_monitor_data(DFData data);
    void on_state_changed(QAbstractSocket::SocketState socketState);
};

#endif // RMTPSERVER_H
