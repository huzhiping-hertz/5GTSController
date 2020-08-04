#ifndef RMTPCMDFACTORY_H
#define RMTPCMDFACTORY_H
#include"rmtpcmd.h"
#include<memory>
using namespace std;

class RmtpCmdFactory
{
public:
    RmtpCmdFactory();
    shared_ptr<RmtpCmd> CreateCmd(QString cmdParameter);
};

#endif // RMTPCMDFACTORY_H
