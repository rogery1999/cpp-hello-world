#include "io.h"
#include <iostream>

double getUserDouble()
{
  std::cout << "Enter a double value: ";

  double num{};
  std::cin >> num;

  return num;
}

char getUserOperand()
{
  std::cout << "Enter +, -, *, or /: ";

  char operand{};
  std::cin >> operand;

  return operand;
}
