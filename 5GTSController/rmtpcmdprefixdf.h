#ifndef RMTPCMDPREFIXDF_H
#define RMTPCMDPREFIXDF_H
#include "rmtpcmd.h"
#include <QString>
class RmtpCmdPreFixDF : public RmtpCmd
{
public:
    RmtpCmdPreFixDF(QString cmd);
    void Response(QTcpSocket* socketPtr);
};

#endif // RMTPCMDPREFIXDF_H
