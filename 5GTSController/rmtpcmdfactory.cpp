#include "rmtpcmdfactory.h"
#include "rmtpcmdverify.h"
#include "rmtpcmdfixdf.h"
#include "rmtpcmderror.h"
#include "rmtpcmdprefixdf.h"
#include "rmtpcmdfixdfparam.h"
#include <memory>

using namespace std;

RmtpCmdFactory::RmtpCmdFactory()
{

}

shared_ptr<RmtpCmd> RmtpCmdFactory::CreateCmd(QString cmdParameter)
{
    string cmd="Single DF Cmd";
    if(cmdParameter.contains("VERIF"))
    {
        //return make_shared<RmtpCmdVerify>(cmdParameter);
        return shared_ptr<RmtpCmd>(new RmtpCmdVerify(cmdParameter));
    }
    else if (cmdParameter.contains("FIXDF"))
    {
        //return make_shared<RmtpCmdFIXDF>(cmdParameter);
        return shared_ptr<RmtpCmd>(new RmtpCmdFIXDF(cmdParameter));
    }
    else if(cmdParameter.contains("PARAM"))
    {
        return shared_ptr<RmtpCmd>(new RmtpCmdFixDFParam(cmdParameter));
    }
    else
    {
        return shared_ptr<RmtpCmd>(new RmtpCmdError(cmdParameter));
    }
}
