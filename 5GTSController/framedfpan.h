#ifndef FRAMEDFPAN_H
#define FRAMEDFPAN_H

#include <QObject>
#include "frameheader.h"

class FrameDFPan : public FrameHeader
{
public:
    unsigned int frequency_low;
    unsigned int frequency_high;
    unsigned int frequency_span;
    int df_squelch_mode;
    int df_squelch_value;
    unsigned int dfbandwidth;
    unsigned int stepwidth;
    // int df_measure_time;
    // int df_option;
    // unsigned short compass_heading;
    // unsigned short compass_heading_type;
    // int antenna_factor;
    // int demod_freq_channel;
    // unsigned int demod_freq_low;
    // unsigned int demod_freq_high;
    // unsigned long outputtimestamp;
    short *ptrlevels;
    short *ptrazimuths;
    short *ptrqualities;
public:
    FrameDFPan(const char *buff);
    ~FrameDFPan();
    void DeSerialize();
};

#endif // FRAMEDFPAN_H
