#include <iostream>

int main()
{

  std::cout << "Enter an integer: ";

  int inputNum{};
  std::cin >> inputNum;

  std::cout << "Enter another integer: ";

  int inputNum2{};
  std::cin >> inputNum2;

  std::cout << inputNum << " + " << inputNum2 << " is " << inputNum + inputNum2 << '\n';
  std::cout << inputNum << " - " << inputNum2 << " is " << inputNum - inputNum2 << '\n';

  return 0;
}