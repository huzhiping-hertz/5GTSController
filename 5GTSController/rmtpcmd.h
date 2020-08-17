#ifndef RMTPCMD_H
#define RMTPCMD_H
#include <QString>
#include <QTcpSocket>

class RmtpCmd
{
public:
    RmtpCmd();
    virtual void Response(QTcpSocket* socketPtr);

    QString CmdParse(QByteArray cmdstr);
    QString ResponseConnected();
    RmtpCmd ResponseRequest();
    QByteArray CmdDeserialize();

protected:
    QString cmd;
};

#endif // RMTPCMD_H
