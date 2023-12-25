#include "math_op.h"
#include <iostream>

void processAndPrintOperationResult(double num1, double num2, char operand)
{

  if (operand == '+')
  {
    return printResult(num1, num2, operand, num1 + num2);
  }

  if (operand == '-')
  {
    return printResult(num1, num2, operand, num1 - num2);
  }

  if (operand == '*')
  {
    return printResult(num1, num2, operand, num1 * num2);
  }

  if (operand == '/')
  {
    return printResult(num1, num2, operand, num1 / num2);
  }

  return;
}

void printResult(double num1, double num2, char operand, double result)
{
  std::cout << num1 << " " << operand << " " << num2 << " is " << result << '\n';
}
