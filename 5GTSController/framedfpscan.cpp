#include "framedfpscan.h"
#include <QtCore>
#include <QtEndian>

FrameDFPscan::FrameDFPscan(const void* buff):FrameHeader(buff)
{

}

FrameDFPscan::~FrameDFPscan()
{
    if((*this).ptrLevel!=NULL)
    {
        delete[](this->ptrLevel);
    }
    if((*this).ptrAzimuth!=NULL)
    {
        delete[](this->ptrAzimuth);
    }
    if((*this).ptrQuality!=NULL)
    {
        delete[](this->ptrQuality);
    }
    if((*this).ptrFstrength!=NULL)
    {
        delete[](this->ptrFstrength);
    }
}

void FrameDFPscan::DeSerialize()
{
    //start offset 76
    FrameHeader::DeSerialize();
    (*this).Frequency = qFromBigEndian<quint64>(buffer + 84);
    (*this).Span=qFromBigEndian<qint32>(buffer+104);
    (*this).Frequency=(*this).Frequency+(*this).Span/2;
    //(*this).Bandwidth=qFromBigEndian<float>(buffer+108);
    (*this).ptrLevel=new qint16[this->trace_number_of_items];
    (*this).ptrAzimuth=new qint16[this->trace_number_of_items];
    (*this).ptrQuality=new qint16[this->trace_number_of_items];
    (*this).ptrFstrength=new qint16[this->trace_number_of_items];
    (*this).ptrLevelCont=new qint16[this->trace_number_of_items];
    (*this).ptrElevation=new qint16[this->trace_number_of_items];
    (*this).ptrStatus=new qint16[this->trace_number_of_items];
    (*this).ptrOmniphase=new qint16[this->trace_number_of_items];

    for(int i=0;i<this->trace_number_of_items;i++)
    {
        this->ptrLevel[i]=qFromBigEndian<qint16>(buffer+76+80+i*2);
        this->ptrAzimuth[i]=qFromBigEndian<qint16>(buffer+76+80+2*this->trace_number_of_items+2*i);
        this->ptrQuality[i]=qFromBigEndian<qint16>(buffer+76+80+4*this->trace_number_of_items+2*i);
        this->ptrFstrength[i]=qFromBigEndian<qint16>(buffer+76+80+6*this->trace_number_of_items+2*i);
        this->ptrLevelCont[i]=qFromBigEndian<qint16>(buffer+76+80+8*this->trace_number_of_items+2*i);
        this->ptrElevation[i]=qFromBigEndian<qint16>(buffer+76+80+10*this->trace_number_of_items+2*i);
        this->ptrStatus[i]=qFromBigEndian<qint16>(buffer+76+80+12*this->trace_number_of_items+2*i);
        this->ptrOmniphase[i]=qFromBigEndian<qint16>(buffer+76+80+14*this->trace_number_of_items+2*i);
    }

}
