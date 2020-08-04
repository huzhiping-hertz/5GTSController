#ifndef RMTPCMDVERIFY_H
#define RMTPCMDVERIFY_H
#include "rmtpcmd.h"
#include <QString>

class RmtpCmdVerify:public RmtpCmd
{
public:
    RmtpCmdVerify(QString cmd);
    QByteArray GetResponse();
};

#endif // GTSCMDVERIFY_H
