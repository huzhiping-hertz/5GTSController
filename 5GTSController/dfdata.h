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
    qreal strength;
    qreal levelcont;
    qreal elevation;
    qreal status;
    qreal omniphase;

    QString ToString();
};

#endif // DFDATA_H
