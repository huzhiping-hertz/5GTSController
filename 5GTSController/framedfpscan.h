#ifndef FRAMEDFPSCAN_H
#define FRAMEDFPSCAN_H

#include "frameheader.h"

class FrameDFPscan : public FrameHeader
{
public:
    qint32 ScanRangeID;
    qint32 ChansInScanRange;
    quint64 Frequency;
    qint32 LogChannel;
    qint32 StepFreqNumber;
    qint32 StepFreqDenom;
    qint32 Span;
    float Bandwidth;
    qint32 MeasureTime;
    quint16 MeasureCount_low;
    qint16 Threashold;
    qint16 CompassHeading;
    qint16 CompHeadType;
    qint32 DFStatus;
    quint64 MeasureTimestamp;
    quint16 JobID;
    qint16 SRSelectorflags;
    quint8 SRWaveCount;
    quint8 NoOfEigenvalues;
    qint16 MeasureCount_high;
    qint32 HopCount;


public:
    FrameDFPscan(const void* buff);
    void DeSerialize();
};

#endif // FRAMEDFPSCAN_H
