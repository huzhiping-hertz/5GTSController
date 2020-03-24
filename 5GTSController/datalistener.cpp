#include "datalistener.h"
#include "datamanager.h"
#include "framefactory.h"
#include "dfdata.h"
#include "dataparser.h"

#include <QHostAddress>
#include <QAbstractSocket>

DataListener::DataListener(QObject *parent) : QObject(parent)
{

}


QString DataListener::Start(QString ip,qint32 port)
{
    QString rs="";
    connect(&tcpserver,SIGNAL(newConnection()),this,SLOT(on_newclient_connected()));
    if(tcpserver.listen(QHostAddress(ip),port))
    {
        rs="successed to listen data";
    }
    else
    {
        rs="failed to listen data";
    }

    return rs;
}

void DataListener::on_newclient_connected()
{
    QTcpSocket *clientSocket =tcpserver.nextPendingConnection();
    connect(clientSocket, SIGNAL(readyRead()), this, SLOT(on_ready_read()));
}

void DataListener::on_ready_read()
{
    QTcpSocket* socketPtr = static_cast<QTcpSocket*>(QObject::sender());
    QByteArray data = socketPtr->readAll();
    //解析DF数据，其它数据都丢弃掉
    std::shared_ptr<FrameHeader> frameptr=FrameFactory::CreateFrame(data.data());
    if(frameptr!=nullptr)
    {
        DFData dfdata=DataParser::Parse(frameptr);
        emit signal_received_data(dfdata);
    }
}
