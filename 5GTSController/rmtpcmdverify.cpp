#include "rmtpcmdverify.h"
#include <QBuffer>
#include <QDataStream>

RmtpCmdVerify::RmtpCmdVerify(QString cmd)
{

}

QByteArray RmtpCmdVerify::GetResponse()
{
    return QByteArray("RMTP:VERIF:+OK\n");
}
