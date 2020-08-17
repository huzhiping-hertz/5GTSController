#ifndef RMTPCMDFIXDFPARAM_H
#define RMTPCMDFIXDFPARAM_H

#include "rmtpcmd.h"

#include <QString>

class RmtpCmdFixDFParam : public RmtpCmd
{
public:
    RmtpCmdFixDFParam(QString cmd);
    void Response(QTcpSocket* socketPtr);
    double Frequency;
    qint16 IFBandWidth;
    qint16 DFBandWidth;
    QString DeMode;
    QString Polar;
};

#endif // RMTPCMDFIXDFPARAM_H
