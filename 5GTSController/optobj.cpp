#include "optobj.h"

OptObj::OptObj()
{

}

QString OptObj::ToString()
{
  QString rs;
  rs.append(" Frequency min:"+QString::number(this->freqmin));
  rs.append(" Frequency max:"+QString::number(this->freqmax));
  rs.append(" Opt Mode:"+this->optmode);
  rs.append(" DF value:"+QString::number(this->dfvalue));
  rs.append(" DF offset:"+QString::number(this->dfoffset));
  rs.append(" Quality value:"+QString::number(this->qualityvalue));
  rs.append(" Quality offset:"+QString::number(this->qualityoffset));
  rs.append(" Level value:"+QString::number(this->levelvalue));
  rs.append(" Level offset:"+QString::number(this->leveloffset));
  return rs;
}
