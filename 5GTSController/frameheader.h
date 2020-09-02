#ifndef FRAMEHEADER_H
#define FRAMEHEADER_H
#include <QtGlobal>

class FrameHeader
{
protected:
    const char* buffer;
public:
    quint32 magic_number;
    quint16 minor_version_number;
    quint16 major_version_number;
    quint16 sequence_low;
    quint16 sequence_high;
    quint32 data_size;

    quint16 attribute_tag;
    quint16 reserved1;
    quint32 attribute_length;
    quint32 reserved2_1;
    quint32 reserved2_2;
    quint32 reserved2_3;
    quint32 reserved2_4;

    quint32 trace_number_of_items;
    quint32 reserved3;
    quint32 trace_optional_header_length;
    quint32 trace_selector_flags_low;
    quint32 trace_selector_flags_high;
    quint32 reserved3_1;
    quint32 reserved3_2;
    quint32 reserved3_3;
    quint32 reserved3_4;
public:
    FrameHeader(const void *buff);
    virtual void DeSerialize();
};

#endif // FRAMEHEADER_H
