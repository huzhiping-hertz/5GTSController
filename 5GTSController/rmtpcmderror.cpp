#include "rmtpcmderror.h"

RmtpCmdError::RmtpCmdError(QString cmd)
{

}

QByteArray RmtpCmdError::GetResponse()
{
    return QByteArray("RESULT:FAILURE;Info:UnSupported this command\n");
}
