#pragma once

#include <string>

class Boov
{
  public:
    Boov(const std::string & NAME, int HEALTH, int SHIELD);
    // pass string by reference
    // use const since those methods are reading data only
    
    std::string GetName() const;
    int GetHealth() const;
    int GetShield() const;

    bool IsDefeated() const;
    void GetsAttacked();

  private:
    std::string name;
    int health;
    int shield;
};
