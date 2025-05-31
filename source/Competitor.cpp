#include "Competitor.h"

Competitor::Competitor(const std::string& NAME,
                       int HEALTH,
                       int SHIELD)
  : name(NAME),
    health(HEALTH),
    shield(SHIELD)
{
}

std::string Competitor::GetName() const
{
  return name;
}

int Competitor::GetHealth() const
{
  return health;
}

int Competitor::GetShield() const
{
  return shield;
}

bool Competitor::IsDefeated() const
{
  return health <= 0;
}

