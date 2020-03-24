#include "gtscmd.h"
#include <QBuffer>
#include <QDataStream>

GtsCmd::GtsCmd(QString cmd)
{
   this->cmdContent=cmd;
}

QByteArray GtsCmd::GetCmdContent()
{
    int bmagic=0xb1c2d3e4;
    int emagic=0xe4d3c2b1;
    QByteArray rs;
    QDataStream out(&rs,QIODevice::ReadWrite);
    out<<bmagic<<this->cmdContent.toLatin1().data()<<emagic;
    return rs;

}


