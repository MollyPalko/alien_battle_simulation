#include "Boov.h"

Boov::Boov(const std::string& NAME, int HEALTH, int SHIELD)
  : Competitor(NAME, HEALTH, SHIELD) 
{
  // initializer is used to fill mem vars. nothing needed here
}

void Boov::GetsAttacked()
{
  int roll = rand() % 100; // generate 0-99
  if (roll == 0) // 1% (just 0)
  {
    health = 0;
  }
  else if (roll <= 50) // 50% (1-50)
  {
    shield -= (2 + (rand() % 4));
    if (shield < 0) 
    {
      health += shield;
      shield = 0;
    }
  }
  else if (roll <= 79) // 29% (51-79)
  {
    health -= (4 + (rand() % 5));
  }
  // else 20% (80-99) do nothing
}

/*
   1% of time, Boov is instantly defeated, set health 0
   20% of time, the attack misses and does 0 damage
   50% of time, the attack does 2-5 random shield damage
   29% of time randomly, the attack does 4-8 random health damage
*/
