#pragma once

#include <string>

class Competitor
{
  public:
    Competitor(const std::string& NAME,
               int HEALTH,
               int SHIELD);

    std::string GetName() const;
    int GetHealth() const;
    int GetShield() const;

    bool IsDefeated() const;
    virtual void GetsAttacked() = 0;
    // do not implement it in Competitor class

  protected:
    // this is necessary for the sub classes to access this in the virtual functions
    std::string name;
    int health;
    int shield;
};
