#include "Gorg.h"

Gorg::Gorg()
  : Competitor("George", 30, 5),
    max_shield(5)
{
  // initializer is used to fill mem vars. nothing needed here
}

void Gorg::GetsAttacked()
{
  // action 1 (15%)
  int roll = rand() % 100;
  if (roll < 15)
  {
    if (++shield > max_shield) --shield;
  }

  // action 2 (65%)
  roll = rand() % 100;
  if (roll < 65)
  {
    shield -= (1 + (rand() % 2));
    if (shield < 0)
    {
      health -= (5 + (rand() %6));
    }
  }
}

/*
   The first action is to check if the shield will regenerate slightly
   15% of time, add 1 to shield value without going over max
   85% of time, no regeneration occurs

   The second action is to check if the health damage is going to be done
   35% of time, attack messes and does 0 damage
   65% of time, the following occurs:
   - shield takes 1-2 random damage
   - if modified shield is now less than zero, attack does random 5-10 health damage
*/
