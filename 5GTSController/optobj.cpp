#include "optobj.h"

OptObj::OptObj()
{
    this->freqmin=0;
    this->freqmax=0;
}

QString OptObj::ToString()
{
    QString rs;
    rs.append(" Frequency min:"+QString::number(this->freqmin));
    rs.append(" Frequency max:"+QString::number(this->freqmax));
    rs.append(" DF value:"+QString::number(this->dfvalue));
    rs.append(" DF offset:"+QString::number(this->dfoffset));
    return rs;
}

void OptObj::Clear()
{
    this->freqmin=0;
    this->freqmax=0;
}
