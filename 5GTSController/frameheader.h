#ifndef FRAMEHEADER_H
#define FRAMEHEADER_H

class FrameHeader
{
public:
    unsigned int magic_number;
    unsigned short minor_version_number;
    unsigned short major_version_number;
    unsigned short sequence_number;
    unsigned short reserved;
    unsigned int data_size;
    unsigned int attribute_tag;
    unsigned short attribute_length;
    short trace_number_of_items;
    char trace_reserved;
    unsigned char trace_optional_header_length;
    unsigned int trace_selector_flags;
public:
    FrameHeader();
    virtual void DeSerialize();
};

#endif // FRAMEHEADER_H
