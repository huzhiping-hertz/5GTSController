#include "rmtpcmdstop.h"
#include "rmtpcmd.h"
#include <QBuffer>
#include <QDataStream>
#include <gtscmd.h>
#include <QDateTime>

RmtpCmdStop::RmtpCmdStop(QString cmd)
{

}

void RmtpCmdStop::Response(QTcpSocket* socketPtr)
{
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

    QByteArray data("RESULT:SUCCESSED;Info: stop command\n");
    //short crc=qChecksum(data.toStdString().c_str(),data.length(),Qt::ChecksumItuV41);
    short framelength=data.length()+12;

    out<<0xeeeeeeee<<framelength<<year<<month<<day<<hour<<min<<second<<milisecond<<dataType;
    rs.append(data);

    socketPtr->write(rs.toStdString().c_str(),rs.length());
}
