#ifndef DATAPARSER_H
#define DATAPARSER_H

#include "dfdata.h"
#include "frameheader.h"

#include <memory>
class DataParser
{
public:
    DataParser();
    static DFData Parse(std::shared_ptr<FrameHeader> ptrFrame);
};

#endif // DATAPARSER_H
