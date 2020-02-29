#include "dataparser.h"
#include "dfdata.h"
#include "frameheader.h"
#include "framedfpan.h"

DataParser::DataParser(){

}

DFData DataParser::Parse(std::shared_ptr<FrameHeader> ptrFrame)
{
    DFData rs;
    std::shared_ptr<FrameDFPan> ptr = std::dynamic_pointer_cast<FrameDFPan>(ptrFrame);
    ptr->DeSerialize();
    rs.bearing = *(ptr->ptrazimuths + (ptr->trace_number_of_items - 1) / 2);
    rs.level = *(ptr->ptrlevels + (ptr->trace_number_of_items - 1) / 2);
    rs.quality =(*(ptr->ptrqualities + (ptr->trace_number_of_items - 1) / 2)) / 10;
    return rs;
}

