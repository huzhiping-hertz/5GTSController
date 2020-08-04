#ifndef RMTPCMDFIXDF_H
#define RMTPCMDFIXDF_H

#include "rmtpcmd.h"
#include <QString>

class RmtpCmdFIXDF:public RmtpCmd
{
public:
    RmtpCmdFIXDF(QString cmd);
    QByteArray GetResponse();
};

#endif // GTSCMDFIXDF_H
