
#include <QString>
#include "rmtpcmd.h"

RmtpCmd::RmtpCmd()
{

}

void RmtpCmd::Response(QTcpSocket* socketPtr)
{

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
