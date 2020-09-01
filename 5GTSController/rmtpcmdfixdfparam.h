#ifndef RMTPCMDFIXDFPARAM_H
#define RMTPCMDFIXDFPARAM_H

#include "rmtpcmd.h"

#include <QString>

class RmtpCmdFixDFParam : public RmtpCmd
{
public:
    RmtpCmdFixDFParam(QString cmd);
    void Response(QTcpSocket* socketPtr);
    qint64 Frequency;
    qint32 IFBandWidth;
    qint32 DFBandWidth;
    QString DeMode;
    QString Polar;
    qint32 IntegrationTime;
private:
    int Times(QString unit);
};

#endif // RMTPCMDFIXDFPARAM_H
