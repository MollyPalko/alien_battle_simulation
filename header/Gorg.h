#pragma once

#include <string>

class Gorg
{
  public:
    Gorg();
    
    std::string GetName() const;
    int GetHealth() const;
    int GetShield() const;

    bool IsDefeated() const;
    void GetsAttacked();

  private:
    std::string name;
    int health;
    int shield;
    int max_shield;
};
