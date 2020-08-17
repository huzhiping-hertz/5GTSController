#ifndef RMTPCMDFIXDF_H
#define RMTPCMDFIXDF_H

#include "rmtpcmd.h"
#include <QString>

class RmtpCmdFIXDF:public RmtpCmd
{
public:
    RmtpCmdFIXDF(QString cmd);
    void Response(QTcpSocket* socketPtr);
};

#endif // GTSCMDFIXDF_H
