#include "rmtpcmdverify.h"
#include <QBuffer>
#include <QDataStream>

RmtpCmdVerify::RmtpCmdVerify(QString cmd)
{

}

void RmtpCmdVerify::Response(QTcpSocket* socketPtr)
{
    QByteArray rs("RMTP:VERIF:+OK\n");
    socketPtr->write(rs.toStdString().c_str(),rs.length());
}
