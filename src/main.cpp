#include "io.h"
#include "math_op.h"
#include <iostream>

int main()
{
  double num1{getUserDouble()};
  double num2{getUserDouble()};
  char operand{getUserOperand()};

  processAndPrintOperationResult(num1, num2, operand);

  return 0;
}
