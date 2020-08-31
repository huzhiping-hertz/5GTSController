#ifndef OPTOBJ_H
#define OPTOBJ_H
#include <QObject>

class OptObj
{
public:
    OptObj();
    QString ToString();
    void Clear();
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
    qreal qualitythreashold;
};

#endif // OPTOBJ_H
