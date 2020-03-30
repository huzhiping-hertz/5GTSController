#include "framedfpan.h"
#include "frameheader.h"

FrameDFPan::FrameDFPan(const char *buff) : FrameHeader(buff)
{

}


FrameDFPan::~FrameDFPan() {
  if ((*this).ptrlevels != NULL) {
    delete[](*this).ptrlevels;
  }
}

void FrameDFPan::DeSerialize() {
//  FrameHeader::DeSerialize();
//  (*this).frequency_low = be32toh(*((unsigned int *)(buffer + 28)));
//  (*this).frequency_high = be32toh(*((unsigned int *)(buffer + 32)));
//  (*this).frequency_span = be32toh(*((unsigned int *)(buffer + 36)));
//  (*this).df_squelch_mode = be32toh(*((int *)(buffer + 40)));
//  (*this).df_squelch_value = be32toh(*((int *)(buffer + 44)));
//  (*this).dfbandwidth = be32toh(*((unsigned int *)(buffer + 48)));
//  (*this).stepwidth = be32toh(*((unsigned int *)(buffer + 52)));
//  (*this).ptrlevels = new short[trace_number_of_items];
//  (*this).ptrazimuths = new short[trace_number_of_items];
//  (*this).ptrqualities = new short[trace_number_of_items];
//  int offset = trace_optional_header_length + 28;
//  for (int i = 0; i < trace_number_of_items; i++) {
//    short val = be16toh(*((short *)(buffer + offset + i * 2)));
//    memcpy((char *)ptrlevels + i * 2, (char *)&val, 2);
//  }
//  offset += trace_number_of_items * 2;
//  for (int i = 0; i < trace_number_of_items; i++) {
//    short val = be16toh(*((short *)(buffer + offset + i * 2)));
//    memcpy((char *)ptrazimuths + i * 2, (char *)&val, 2);
//  }
//  offset += trace_number_of_items * 2;
//  for (int i = 0; i < trace_number_of_items; i++) {
//    short val = be16toh(*((short *)(buffer + offset + i * 2)));
//    memcpy((char *)ptrqualities + i * 2, (char *)&val, 2);
//  }
  // memcpy((*this).ptrlevels, buffer + 68, trace_number_of_items * 2);
}
