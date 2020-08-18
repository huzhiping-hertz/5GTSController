#include "paramobj.h"

ParamObj::ParamObj()
{

}

void ParamObj::SelectAntenna(QList<AtennaInfo> atennas)
{
    foreach (AtennaInfo atenna, atennas) {
        if(frequency *1000000> atenna.FreqMin && frequency*1000000 < atenna.FreqMax)
        {
            this->freqBegin=atenna.FreqMin;
            this->freqEnd=atenna.FreqMax;
            this->antenna=atenna.AtennaName;
        }
    }
}
