#include "rmtpcmdprefixdf.h"
#include "rmtpcmd.h"

RmtpCmdPreFixDF::RmtpCmdPreFixDF(QString cmd)
{

}

QByteArray RmtpCmdPreFixDF::GetResponse()
{
    return QByteArray("RESULT:SUCCESSED;Info: prefixdf command\n");
}
