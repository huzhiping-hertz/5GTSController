#ifndef ATENNAINFO_H
#define ATENNAINFO_H
#include <QString>

class AtennaInfo
{
public:
    AtennaInfo();
public:
    QString AtennaName;
    qint64 FreqMin;
    qint64 FreqMax;
};

#endif // ATENNAINFO_H
