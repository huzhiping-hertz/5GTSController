#ifndef DFDATA_H
#define DFDATA_H
#include <QtGlobal>

class DFData
{
public:
    qint64 frequency;
    qreal quality;
    qreal level;
    qreal bearing;

    QString ToString();
};

#endif // DFDATA_H
