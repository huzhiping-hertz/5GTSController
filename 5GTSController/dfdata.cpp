#include "dfdata.h"
#include <QtCore>
#include <QString>

QString DFData::ToString()
{
    QString rs;
    rs.append("Frequency:"+QString::number(this->frequency)+"\n");
    rs.append("Level:"+QString::number(this->level)+"\n");
    rs.append("Bearing:"+QString::number(this->bearing)+"\n");
    rs.append("Quality:"+QString::number(this->quality)+"\n");
    rs.append("Strength:"+QString::number(this->strength)+"\n");
    rs.append("LevelCont"+QString::number(this->levelcont)+"\n");
    rs.append("Elevation:"+QString::number(this->elevation)+"\n");
    rs.append("Status:"+QString::number(this->status)+"\n");
    rs.append("Omniphase:"+QString::number(this->omniphase)+"\n\n");
    return rs;
}
