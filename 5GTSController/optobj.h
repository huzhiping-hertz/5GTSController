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
    qint64 freqmin ;
    qint64 freqmax;
    qreal dfvalue;
    qreal dfoffset;
    qreal qualitythreashold;
};

#endif // OPTOBJ_H
