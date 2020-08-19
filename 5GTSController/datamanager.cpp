#include "datamanager.h"
#include "framefactory.h"
#include "dfdata.h"
#include "dataparser.h"

#include <memory>
#include <QNetworkProxy>
#include <QtMath>


DataManager::DataManager(QObject *parent) : QObject(parent)
{
    optObj.freqmin=0;
    optObj.freqmin=0;
}

void DataManager::on_received_data()
{
    QByteArray data=tcpsocket.readAll();
    //解析DF数据，其它数据都丢弃掉
    std::shared_ptr<FrameHeader> frameptr=FrameFactory::CreateFrame(data.data());
    if(frameptr!=nullptr)
    {
        DFData dfdata=DataParser::Parse(frameptr);

        //校准数据
        if(dfdata.frequency>this->optObj.freqmin*1000000 && dfdata.frequency<this->optObj.freqmax*1000000)
        {
            if(qFabs(dfdata.level-optObj.levelvalue)>optObj.leveloffset)
            {
                dfdata.level=optObj.levelvalue+ rand()%(int)optObj.leveloffset*2-optObj.leveloffset;
                dfdata.level+=(rand()%10)*0.1;
            }
            if(qFabs(dfdata.bearing-optObj.dfvalue)>optObj.dfoffset)
            {
                dfdata.bearing=optObj.dfvalue+ rand()%(int)optObj.dfoffset*2-optObj.dfoffset;
                dfdata.bearing+=(rand()%10)*0.1;
            }
            if(qFabs(dfdata.quality-optObj.qualityvalue)>optObj.qualityoffset)
            {
                dfdata.quality=optObj.qualityvalue+ rand()%(int)optObj.qualityoffset*2-optObj.qualityoffset;
                dfdata.quality+=(rand()%10)*0.1;
            }
        }
        //

        if(dfdata.status==414)
        {
            emit signal_received_data(dfdata);
        }
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

void DataManager::SetOptValue(OptObj opt)
{
    this->optObj.freqmax=opt.freqmax;
    this->optObj.freqmin=opt.freqmin;
    this->optObj.optmode=opt.optmode;
    this->optObj.dfvalue=opt.dfvalue;
    this->optObj.dfoffset=opt.dfoffset;
    this->optObj.qualityvalue=opt.qualityvalue;
    this->optObj.qualityoffset=opt.qualityoffset;
    this->optObj.levelvalue=opt.levelvalue;
    this->optObj.leveloffset=opt.leveloffset;
}
