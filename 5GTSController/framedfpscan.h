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

    qint16 *ptrLevel;
    qint16 *ptrAzimuth;
    qint16 *ptrQuality;
    qint16 *ptrFstrength;
    qint16 *ptrLevelCont;
    qint16 *ptrElevation;
    qint16 *ptrStatus;
    qint16 *ptrOmniphase;

public:
    FrameDFPscan(const void* buff);
    ~FrameDFPscan();
    void DeSerialize();
};

#endif // FRAMEDFPSCAN_H
