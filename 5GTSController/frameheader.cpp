#include "frameheader.h"

FrameHeader::FrameHeader() {
}

void FrameHeader::DeSerialize() {
//  (*this).magic_number = be32toh(*((unsigned int *)buffer));
//  (*this).minor_version_number = be16toh(*((unsigned short *)(buffer + 4)));
//  (*this).major_version_number = be16toh(*((unsigned short *)(buffer + 6)));
//  (*this).sequence_number = be16toh(*((unsigned short *)(buffer + 8)));
//  (*this).reserved = be16toh(*((unsigned short *)(buffer + 10)));
//  (*this).data_size = be32toh(*((unsigned int *)(buffer + 12)));
//  (*this).attribute_tag = be16toh(*((unsigned short *)(buffer + 16)));
//  (*this).attribute_length = be16toh(*((unsigned short *)(buffer + 18)));
//  (*this).trace_number_of_items = be16toh(*((unsigned short *)(buffer + 20)));
//  (*this).trace_reserved = *(buffer + 22);
//  (*this).trace_optional_header_length = *(buffer + 23);
//  (*this).trace_selector_flags = be32toh(*((unsigned int *)(buffer + 24)));
}
