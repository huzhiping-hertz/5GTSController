#ifndef RMTPCMDERROR_H
#define RMTPCMDERROR_H
#include "rmtpcmd.h"
#include <QByteArray>
#include <QString>

class RmtpCmdError : public RmtpCmd
{
public:
    RmtpCmdError(QString cmd);
    void Response(QTcpSocket* socketPtr);
};

#endif // RMTPCMDERROR_H
