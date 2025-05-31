#include <ctime>
#include <iostream>
#include "Boov.h"
#include "Gorg.h"

int main()
{
  // different randomness every time program is executed
  srand(static_cast<unsigned> (time(0)));
/*
  // get health
  std::cout << "Enter Boov health value: ";
  int health;
  std::cin >> health;

  // get shield;
  std::cout << "Enter Boov shield value: ";
  int shield;
  std::cin >> shield;
*/
  // Run many simulations
  const int NUMBER_OF_SIMULATIONS = 100000;
  // count total num rounds survived
  //int roundsSurvived = 0;
  int boovWins = 0;
  int gorgWins = 0;

  // repeat many times
  for (int i = 0; i <= NUMBER_OF_SIMULATIONS; ++i)
  {
    // how long can a single Boov last
    Boov oh("Oh", 31, 13);
    Gorg george; // calls default constructor

    // while still healthy enough to do battle...
    while ((oh.IsDefeated() == false) && (george.IsDefeated() == false))
    {
      george.GetsAttacked();
      if (george.IsDefeated() == false)
      {
        oh.GetsAttacked();
      }
    }

    if (george.IsDefeated())
    {
      ++boovWins;
    }
    else
    {
      ++gorgWins;
    }
  }

  double boov_pct = boovWins / static_cast<double>(NUMBER_OF_SIMULATIONS) * 100;
  double gorg_pct = gorgWins / static_cast<double>(NUMBER_OF_SIMULATIONS) * 100;

  std::cout << "Boov: " << boov_pct << std::endl;
  std::cout << "Gorg: " << gorg_pct << std::endl;

  // gather and report final statistics
  //std::cout << "Average number of rounds until defeated: ";


  //double average = roundsSurvived / static_cast<double>(NUMBER_OF_SIMULATIONS);

  //std::cout << average << std::endl;

  return 0;
}
