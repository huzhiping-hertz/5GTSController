#ifndef GTSCMD_H
#define GTSCMD_H

#include <QString>

class GtsCmd
{
protected:
    QString cmdContent;

public:
    GtsCmd(QString cmd);

    virtual QByteArray GetCmdContent();
    virtual QByteArray GetResponse();
};

#endif // GTSCMD_H
