#ifndef RMTPCMDSTOP_H
#define RMTPCMDSTOP_H
#include "rmtpcmd.h"

class RmtpCmdStop:public RmtpCmd
{
public:
    RmtpCmdStop(QString cmd);
    void Response(QTcpSocket* socketPtr);
};

#endif // RMTPCMDSTOP_H
