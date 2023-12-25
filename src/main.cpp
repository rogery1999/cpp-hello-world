#include "io.h"
#include "physics.h"
#include <iostream>

int main()
{
  double height{getInitialHeight()};
  starFreeFall(height);

  return 0;
}
