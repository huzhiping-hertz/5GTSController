#include <QBuffer>
#include <QDataStream>
#include <gtscmd.h>
#include <QDateTime>
#include <string>
#include "rmtpcmdfixdfparam.h"

RmtpCmdFixDFParam::RmtpCmdFixDFParam(QString cmd)
{
    this->cmd=cmd;
}

void RmtpCmdFixDFParam::Response(QTcpSocket* socketPtr)
{
    QRegExp rx("frequency=(\\d*\\.*\\d+)MHz");
    int pos=rx.indexIn(this->cmd);
    if(pos>-1)
    {
        this->Frequency=rx.cap(1).toDouble();
    }

    rx=QRegExp("ifbw=(\\d+)kHz");
    pos=rx.indexIn(this->cmd);
    if(pos>-1)
    {
        this->IFBandWidth=rx.cap(1).toInt();
    }

    rx=QRegExp("dfbw=(\\d+)kHz");
    pos=rx.indexIn(this->cmd);
    if(pos>-1)
    {
        this->DFBandWidth=rx.cap(1).toInt();
    }

    rx=QRegExp("demodmode=(\\S+),");
    pos=rx.indexIn(this->cmd);
    if(pos>-1)
    {
        this->DeMode=rx.cap(1);
    }

    rx=QRegExp("polarization=(\\S+),");
    pos=rx.indexIn(this->cmd);
    if(pos>-1)
    {
        this->Polar=rx.cap(1);
    }

    QByteArray rs;
    QDataStream out(&rs,QIODevice::ReadWrite);
    out.setByteOrder(QDataStream::LittleEndian);


    QDateTime now=QDateTime::currentDateTime();
    qint16 year=now.date().year();
    qint8 month=now.date().month();
    qint8 day=now.date().day();
    qint8 hour=now.time().hour();
    qint8 min=now.time().minute();
    qint8 second=now.time().second();
    qint16 milisecond=1;
    qint8 dataType=4;

    QByteArray data("RESULT:SUCCESSED;Info: Param received.");
    short framelength=data.length()+12;

    out<<0xeeeeeeee<<framelength<<year<<month<<day<<hour<<min<<second<<milisecond<<dataType;
    rs.append(data);
    socketPtr->write(rs.toStdString().c_str(),rs.length());

    QByteArray rsparam;
    QDataStream outparam(&rsparam,QIODevice::ReadWrite);
    outparam.setByteOrder(QDataStream::LittleEndian);

    dataType=7;
    QByteArray paramData(this->cmd.toStdString().c_str());
    framelength=paramData.length()+12;
    outparam<<0xeeeeeeee<<framelength<<year<<month<<day<<hour<<min<<second<<milisecond<<dataType;
    rsparam.append(paramData);
    socketPtr->write(rsparam.toStdString().c_str(),framelength+4);

    QByteArray rsheader;
    QDataStream outheader(&rsheader,QIODevice::ReadWrite);
    outheader.setByteOrder(QDataStream::LittleEndian);
    dataType=6;
    framelength=9+12;
    qint8 itype=0;
    qint64 freq=(int)(this->Frequency*1000000);
    outheader<<0xeeeeeeee<<framelength<<year<<month<<day<<hour<<min<<second<<milisecond<<dataType<<itype<<freq;
    socketPtr->write(rsheader.toStdString().c_str(),framelength+4);

}
