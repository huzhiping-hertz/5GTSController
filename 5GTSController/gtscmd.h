#ifndef GTSCMD_H
#define GTSCMD_H

#include <QString>

class GtsCmd
{
private:
    QString cmdContent;

public:
    GtsCmd(QString cmd);

    QByteArray GetCmdContent();
};

#endif // GTSCMD_H
