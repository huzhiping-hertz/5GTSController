#ifndef RMTPCMDFIXDFPARAM_H
#define RMTPCMDFIXDFPARAM_H

#include "rmtpcmd.h"

#include <QString>

class RmtpCmdFixDFParam : public RmtpCmd
{
public:
    RmtpCmdFixDFParam(QString cmd);
    QByteArray GetResponse();
    double Frequency;
    qint16 IFBandWidth;
    qint16 DFBandWidth;
};

#endif // RMTPCMDFIXDFPARAM_H
