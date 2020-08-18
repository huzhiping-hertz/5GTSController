#ifndef PARAMOBJ_H
#define PARAMOBJ_H
#include <QString>
#include <QList>
#include "atennainfo.h"

class ParamObj
{
public:
    ParamObj();
    void SelectAntenna(QList<AtennaInfo> atennas);
public :
    qreal frequency;
    qint32 ifpan;
    qint32 dfpan;
    QString demode;
    QString antenna;
    qint64 freqBegin;
    qint64 freqEnd;
    QString polorization;
};

#endif // PARAMOBJ_H
