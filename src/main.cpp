#include <iostream>

int main()
{

  std::cout << "Enter an integer: ";

  int inputNum{};
  std::cin >> inputNum;

  std::cout << "Double " << inputNum << " is: " << inputNum * 2 << '\n';

  return 0;
}