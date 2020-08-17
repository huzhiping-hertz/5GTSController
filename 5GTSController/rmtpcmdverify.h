#ifndef RMTPCMDVERIFY_H
#define RMTPCMDVERIFY_H
#include "rmtpcmd.h"
#include <QString>

class RmtpCmdVerify:public RmtpCmd
{
public:
    RmtpCmdVerify(QString cmd);
    void Response(QTcpSocket* socketPtr);
};

#endif // GTSCMDVERIFY_H
