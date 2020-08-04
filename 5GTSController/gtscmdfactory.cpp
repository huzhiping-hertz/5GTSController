#include "gtscmdfactory.h"
#include <memory>
#include <string>
using namespace std;

GtsCmdFactory::GtsCmdFactory()
{

}

GtsCmd GtsCmdFactory::CreateInitCmd(QString cmdParameter)
{
    QString cmd="Init Cmd";

    return GtsCmd(cmd);
}

shared_ptr<GtsCmd> GtsCmdFactory::CreateDFCmd(QString cmdParameter)
{
    QString cmd="Single DF Cmd";
    return shared_ptr<GtsCmd>();
}
