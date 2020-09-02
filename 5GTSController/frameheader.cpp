#include "frameheader.h"
#include <QtCore>
#include <QtEndian>

FrameHeader::FrameHeader(const void* buff) {
    this->buffer=(char*)buff;
}

void FrameHeader::DeSerialize() {
    //16
  (*this).magic_number =qFromBigEndian<qint32>(buffer);
  (*this).minor_version_number = qFromBigEndian<quint16>(buffer + 4);
  (*this).major_version_number = qFromBigEndian<quint16>(buffer + 6);
  (*this).sequence_low = qFromBigEndian<quint16>(buffer + 8);
  (*this).sequence_high =qFromBigEndian<quint16>(buffer + 10);
  (*this).data_size = qFromBigEndian<quint32>(buffer + 12);
  //12
  (*this).attribute_tag = qFromBigEndian<quint16>(buffer + 16);
   (*this).reserved1=qFromBigEndian<quint16>(buffer+18);
  (*this).attribute_length = qFromBigEndian<quint32>(buffer + 20);
   (*this).reserved2_1=qFromBigEndian<quint32>(buffer+24);
   (*this).reserved2_2=qFromBigEndian<quint32>(buffer+28);
    (*this).reserved2_3=qFromBigEndian<quint32>(buffer+32);
    (*this).reserved2_4=qFromBigEndian<quint32>(buffer+36);

    //2966
  (*this).trace_number_of_items = qFromBigEndian<quint32>(buffer + 40);
  (*this).reserved3 = qFromBigEndian<quint32>(buffer + 44);
  (*this).trace_optional_header_length = qFromBigEndian<quint32>(buffer + 48);
  (*this).trace_selector_flags_low =qFromBigEndian<quint32>(buffer + 52);
  (*this).trace_selector_flags_high =qFromBigEndian<quint32>(buffer + 56);
  (*this).reserved3_1 =qFromBigEndian<quint32>(buffer + 60);
    (*this).reserved3_2 =qFromBigEndian<quint32>(buffer + 64);
    (*this).reserved3_3 =qFromBigEndian<quint32>(buffer + 68);
    (*this).reserved3_4 =qFromBigEndian<quint32>(buffer + 72);
}
