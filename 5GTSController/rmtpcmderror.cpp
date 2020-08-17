#include "rmtpcmderror.h"

RmtpCmdError::RmtpCmdError(QString cmd)
{

}

void RmtpCmdError::Response(QTcpSocket* socketPtr)
{
    QByteArray rs("RESULT:FAILURE;Info:UnSupported this command\n");
    socketPtr->write(rs.toStdString().c_str(),rs.length());
}
