#include "gtscmdfactory.h"

GtsCmdFactory::GtsCmdFactory()
{

}

GtsCmd GtsCmdFactory::CreateInitCmd(QString cmdParameter)
{
    QString cmd="Init Cmd";

    return GtsCmd(cmd);
}

GtsCmd GtsCmdFactory::CreateDFCmd(QString cmdParameter)
{
    QString cmd="Single DF Cmd";
    return GtsCmd(cmd);
}
