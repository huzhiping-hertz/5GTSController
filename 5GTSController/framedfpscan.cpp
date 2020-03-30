#include "framedfpscan.h"
#include <QtCore>
#include <QtEndian>

FrameDFPscan::FrameDFPscan(const void* buff):FrameHeader(buff)
{

}

void FrameDFPscan::DeSerialize()
{
    FrameHeader::DeSerialize();
    (*this).Frequency = qFromBigEndian<quint64>(buffer + 84);
    (*this).Span=qFromBigEndian<qint32>(buffer+104);
}
