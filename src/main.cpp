#include <iostream>
#include <vector>
#include <string>
#include "config.h"
#include "MathFunctions/MathFunctions.h"

using namespace std;

int main()
{
  vector<string> msg{"Hello", "world", "from", "Rogery", "!", "7"};

  for (const string &word : msg)
  {
    cout << word << " ";
  }
  cout << endl;

  cout << "project version: " << hello_world_VERSION_MAJOR << "." << hello_world_VERSION_MINOR << endl;

  float num = 1.44;
  cout << "sqrt(" << num << "): " << sqrt(num);

  return 0;
}