#ifndef RMTPCMD_H
#define RMTPCMD_H
#include <QString>
class RmtpCmd
{
private:
    qint64 frequency;
    qint32 bandwidth;
    qint32 span;
public:
    RmtpCmd();
    QString CmdParse(QByteArray cmdstr);
    QString ResponseConnected();
    RmtpCmd ResponseRequest();
    QByteArray CmdDeserialize();
};

#endif // RMTPCMD_H
