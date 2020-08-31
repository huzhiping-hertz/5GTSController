#include "paramobj.h"

ParamObj::ParamObj()
{
    this->range=2000;
}

void ParamObj::SelectAntenna(QList<AtennaInfo> atennas,QString polor)
{
    int count=0;
    foreach (AtennaInfo atenna, atennas) {
        if(frequency *1000000> atenna.FreqMin && frequency*1000000 < atenna.FreqMax && atenna.Polor==polor)
        {
            this->freqBegin=atenna.FreqMin;
            this->freqEnd=atenna.FreqMax;
            this->antenna=atenna.AtennaName;
            this->polorization=atenna.Polor;
            count++;
        }
    }

    if(count ==0)
    {
        foreach (AtennaInfo atenna, atennas) {
            if(frequency *1000000> atenna.FreqMin && frequency*1000000 < atenna.FreqMax)
            {
                this->freqBegin=atenna.FreqMin;
                this->freqEnd=atenna.FreqMax;
                this->antenna=atenna.AtennaName;
                this->polorization=atenna.Polor;
                count++;
            }
        }
    }
}
