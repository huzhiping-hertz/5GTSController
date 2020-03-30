#include "dataparser.h"
#include "dfdata.h"
#include "frameheader.h"
#include "framedfpscan.h"

DataParser::DataParser(){

}

DFData DataParser::Parse(std::shared_ptr<FrameHeader> ptrFrame)
{
    DFData rs;
    std::shared_ptr<FrameDFPscan> ptr = std::dynamic_pointer_cast<FrameDFPscan>(ptrFrame);
    ptr->DeSerialize();

    return rs;
}

