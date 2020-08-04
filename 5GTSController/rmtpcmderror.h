#ifndef RMTPCMDERROR_H
#define RMTPCMDERROR_H
#include "rmtpcmd.h"
#include <QByteArray>
#include <QString>

class RmtpCmdError : public RmtpCmd
{
public:
    RmtpCmdError(QString cmd);
    QByteArray GetResponse();
};

#endif // RMTPCMDERROR_H
