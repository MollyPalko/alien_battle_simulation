#pragma once

#include <string>
#include "Competitor.h"

class Boov : public Competitor
{
  public:
    Boov(const std::string & NAME, int HEALTH, int SHIELD);
    // pass string by reference
    // use const since those methods are reading data only
    
    virtual void GetsAttacked() override;
    // override the no behavior for this function as defined in Competitor

  private:
};
