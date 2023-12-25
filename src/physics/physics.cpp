#include "physics.h"
#include <iostream>

void starFreeFall(double initialHeight)
{
  return processFreeFall(initialHeight, 0.0);
}

void processFreeFall(double initialHeight, int seconds)
{
  double distanceFallen{getDistanceFallen(seconds)};
  double ballHeight{initialHeight - distanceFallen};
  if (ballHeight <= 0.0)
  {
    std::cout << "At " << seconds << " seconds, the ball is on the ground.";
    return;
  }

  printFreeFallLog(seconds, ballHeight);
  return processFreeFall(initialHeight, seconds + 1);
}

double getDistanceFallen(int seconds)
{
  // distance fallen = gravity_constant * x_seconds2 / 2
  return 9.8 * seconds * seconds / 2.0;
}

void printFreeFallLog(int second, double height)
{
  std::cout << "At " << second << " seconds, the ball is at height: " << height << " meters\n";
}
