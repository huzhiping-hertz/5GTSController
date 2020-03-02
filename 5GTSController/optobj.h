#ifndef OPTOBJ_H
#define OPTOBJ_H
#include <QObject>

class OptObj
{
public:
    OptObj();
    QString ToString();
public:
    qreal freqmin ;
    qreal freqmax;
    QString optmode;
    qreal dfvalue;
    qreal dfoffset;
    qreal qualityvalue;
    qreal qualityoffset;
    qreal levelvalue;
    qreal leveloffset;
};

#endif // OPTOBJ_H
