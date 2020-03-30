#include "framefactory.h"
#include "frametagtype.h"
#include "framedfpscan.h"

#include <QtCore>
#include <QtEndian>

FrameFactory::FrameFactory()
{

}

std::shared_ptr<FrameHeader> FrameFactory::CreateFrame(const char *buff) {
  qint32 frametype=qFromBigEndian<qint16>(buff + 16);
  if (frametype == Frame_TagType::DFPScan) {
    return std::make_shared<FrameDFPscan>(buff);
  } else {
    return nullptr;
  }
}
