#include "rmtpcmdprefixdf.h"
#include "rmtpcmd.h"

RmtpCmdPreFixDF::RmtpCmdPreFixDF(QString cmd)
{

}

void RmtpCmdPreFixDF::Response(QTcpSocket* socketPtr)
{
    QByteArray rs("RESULT:SUCCESSED;Info: prefixdf command\n");
    socketPtr->write(rs.toStdString().c_str(),rs.length());
}
