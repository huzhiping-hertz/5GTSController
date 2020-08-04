
#include <QString>
#include "rmtpcmd.h"

RmtpCmd::RmtpCmd()
{

}

QByteArray RmtpCmd::GetResponse()
{
    QByteArray rs;
    return rs;
}

QString RmtpCmd::CmdParse(QByteArray cmdstr)
{
    QString cmd(cmdstr);
    return cmd;
}

QString RmtpCmd::ResponseConnected()
{
    return "This is a response\n";
}
