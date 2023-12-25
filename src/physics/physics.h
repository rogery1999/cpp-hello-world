#ifndef PHYSICS_H
#define PHYSICS_H

void starFreeFall(double initialHeight);
void processFreeFall(double initialHeight, int seconds);
double getDistanceFallen(int seconds);
void printFreeFallLog(int second, double height);

#endif
