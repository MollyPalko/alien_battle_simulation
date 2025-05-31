#pragma once

#include "Competitor.h"

class Gorg : public Competitor
{
  public:
    Gorg();
    virtual void GetsAttacked() override;
    
  private:
    int max_shield;
};
