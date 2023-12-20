#include <iostream>
#include <vector>
#include <string>
#include "config.h"
#include "MathFunctions/MathFunctions.h"

void doSomething(int &)
{
}

int main()
{
  int x;
  doSomething(x);

  std::cout << "uninitialized value of x: " << x << '\n';

  std::cout << "Enter a number for x: ";
  std::cin >> x;

  std::cout << "the value of x enter by the user is: " << x << '\n';

  return 0;
}