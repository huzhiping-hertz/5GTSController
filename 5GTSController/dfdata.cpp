#include "dfdata.h"
#include <QtCore>
#include <QString>

QString DFData::ToString()
{
    QString rs;
    rs.append("Frequency:"+QString::number(this->frequency));
    rs.append("Level:"+QString::number(this->level));
    rs.append("Bearing:"+QString::number(this->bearing));
    rs.append("Quality:"+QString::number(this->quality));
    return rs;
}
