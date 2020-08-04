#ifndef RMTPCMD_H
#define RMTPCMD_H
#include <QString>

class RmtpCmd
{
public:
    RmtpCmd();
    virtual QByteArray GetResponse();

    QString CmdParse(QByteArray cmdstr);
    QString ResponseConnected();
    RmtpCmd ResponseRequest();
    QByteArray CmdDeserialize();

protected:
    QString cmd;
};

#endif // RMTPCMD_H
