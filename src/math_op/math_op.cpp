#include "math_op.h"
#include <iostream>

void printOperationResult(double num1, double num2, char operand)
{

  if (operand == '+')
  {
    std::cout << num1 << " " << operand << " " << num2 << " is " << num1 + num2 << '\n';
    return;
  }

  if (operand == '-')
  {
    std::cout << num1 << " " << operand << " " << num2 << " is " << num1 - num2 << '\n';
    return;
  }

  if (operand == '*')
  {
    std::cout << num1 << " " << operand << " " << num2 << " is " << num1 * num2 << '\n';
    return;
  }

  if (operand == '/')
  {
    std::cout << num1 << " " << operand << " " << num2 << " is " << num1 / num2 << '\n';
    return;
  }

  return;
}
