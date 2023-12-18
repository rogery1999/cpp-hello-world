#include <iostream>
#include <vector>
#include <string>
#include "config.h"

using namespace std;

int main()
{
  vector<string> msg{"Hello", "world", "from", "Rogery", "!", "6"};

  for (const string &word : msg)
  {
    cout << word << " ";
  }
  cout << endl;

  cout << "project version: " << hello_world_VERSION_MAJOR << "." << hello_world_VERSION_MINOR << endl;
  return 0;
}