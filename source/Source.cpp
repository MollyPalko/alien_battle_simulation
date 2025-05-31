#include <ctime>
#include <iostream>
#include "Boov.h"

int main()
{
  // different randomness every time program is executed
  srand(static_cast<unsigned> (time(0)));

  // get health
  std::cout << "Enter Boov health value: ";
  int health;
  std::cin >> health;

  // get shield;
  std::cout << "Enter Boov shield value: ";
  int shield;
  std::cin >> shield;

  // Run many simulations
  const int NUMBER_OF_SIMULATIONS = 100000;
  // count total num rounds survived
  int roundsSurvived = 0;

  // repeat many times
  for (int i = 0; i <= NUMBER_OF_SIMULATIONS; ++i)
  {
    // how long can a single Boov last
    Boov oh("Oh", health, shield);

    // while still healthy enough to do battle...
    while (oh.IsDefeated() == false)
    {
      // take another hit
      ++roundsSurvived;
      oh.GetsAttacked();
    }
  }

  // gather and report final statistics
  std::cout << "Average number of rounds until defeated: ";

  double average = roundsSurvived / 
    static_cast<double>(NUMBER_OF_SIMULATIONS);

  std::cout << average << std::endl;

  return 0;
}
