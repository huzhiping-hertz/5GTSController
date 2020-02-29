#include "rmtpcmd.h"
#include <QString>

RmtpCmd::RmtpCmd()
{

}

QString RmtpCmd::CmdParse(QByteArray cmdstr)
{
    QString cmd(cmdstr);
    this->frequency=108000000;
    this->bandwidth=2000000;
    this->span=2000000;
    return cmd;
}

QString RmtpCmd::ResponseConnected()
{
    return "This is a response\n";
}
