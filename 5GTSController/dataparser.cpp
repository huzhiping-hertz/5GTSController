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
    rs.frequency=ptr->Frequency;
    rs.level=ptr->ptrLevel[ptr->trace_number_of_items/2]/10.0;
    rs.bearing=ptr->ptrAzimuth[ptr->trace_number_of_items/2]/10.0;
    rs.quality=ptr->ptrQuality[ptr->trace_number_of_items/2]/10.0;
    rs.strength=ptr->ptrFstrength[ptr->trace_number_of_items/2]/10.0+3;
    rs.levelcont=ptr->ptrLevelCont[ptr->trace_number_of_items/2]/10.0;
    rs.elevation=ptr->ptrElevation[ptr->trace_number_of_items/2]/10.0;
    rs.status=ptr->ptrStatus[ptr->trace_number_of_items/2];
    rs.omniphase=ptr->ptrOmniphase[ptr->trace_number_of_items/2]/10.0;
    return rs;
}

