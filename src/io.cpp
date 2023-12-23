#include "io.h"
#include <iostream>

int readNumber()
{
  std::cout << "Input one number: ";

  int inputNum{};
  std::cin >> inputNum;

  return inputNum;
}

void writeAnswer(int answer)
{
  std::cout << "The result is : " << answer << '\n';
}
