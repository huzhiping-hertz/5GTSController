#include "datamanager.h"
#include "framefactory.h"
#include "dfdata.h"
#include "dataparser.h"

#include <memory>
#include <QNetworkProxy>

DataManager::DataManager(QObject *parent) : QObject(parent)
{

}

void DataManager::on_received_data()
{
    QByteArray data=tcpsocket.readAll();
    //解析DF数据，其它数据都丢弃掉
    std::shared_ptr<FrameHeader> frameptr=FrameFactory::CreateFrame(data.data());
    if(frameptr!=nullptr)
    {
        DFData dfdata=DataParser::Parse(frameptr);
        emit signal_received_data(dfdata);
    }
}

bool DataManager::ConnectDevice(QString ip,qint32 port)
{
    connect(&tcpsocket,SIGNAL(readyRead()), this, SLOT(on_received_data()));
    this->tcpsocket.setProxy(QNetworkProxy::NoProxy);
    this->tcpsocket.connectToHost(ip,port);
    return true;
}

void DataManager::DisConnectDevice()
{
    this->tcpsocket.disconnectFromHost();
}
