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
    int offset=ptr->trace_number_of_items/2+ptr->trace_number_of_items%2;
    rs.level=ptr->ptrLevel[offset]/10.0;
    rs.bearing=ptr->ptrAzimuth[offset]/10.0;
    rs.quality=ptr->ptrQuality[offset]/10.0;
    rs.strength=ptr->ptrFstrength[offset]/10.0;
    rs.levelcont=ptr->ptrLevelCont[offset]/10.0;
    rs.elevation=ptr->ptrElevation[offset]/10.0;
    rs.status=ptr->ptrStatus[offset];
    rs.omniphase=ptr->ptrOmniphase[offset]/10.0;
    return rs;
}

