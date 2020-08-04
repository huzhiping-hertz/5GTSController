#ifndef GTSCMDFACTORY_H
#define GTSCMDFACTORY_H

#include"gtscmd.h"
#include <memory>
using namespace std;

class GtsCmdFactory
{
public:
    GtsCmdFactory();
    GtsCmd CreateInitCmd(QString cmdParameter);
    shared_ptr<GtsCmd> CreateDFCmd(QString cmdParameter);
};

#endif // GTSCMDFACTORY_H
