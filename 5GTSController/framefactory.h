#ifndef FRAMEFACTORY_H
#define FRAMEFACTORY_H

#include "frameheader.h"
#include <memory>

using namespace std;

class FrameFactory
{
private:
    FrameFactory();
public:
  static shared_ptr<FrameHeader> CreateFrame(const char *buff);
};

#endif // FRAMEFACTORY_H
