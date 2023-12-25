#include "io.h"
#include <iostream>

double getInitialHeight()
{
  std::cout << "Enter the height of the tower in meters: ";

  double height{};
  std::cin >> height;

  return height;
}
