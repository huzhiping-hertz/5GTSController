#include "gtscmd.h"

GtsCmd::GtsCmd(QString cmd)
{
   this->cmdContent=cmd;
}

QByteArray GtsCmd::GetCmdContent()
{
    return this->cmdContent.toLocal8Bit();
}


