#ifndef GTSCMDFACTORY_H
#define GTSCMDFACTORY_H

#include"gtscmd.h"

class GtsCmdFactory
{
public:
    GtsCmdFactory();
    GtsCmd CreateInitCmd(QString cmdParameter);
    GtsCmd CreateDFCmd(QString cmdParameter);
};

#endif // GTSCMDFACTORY_H
