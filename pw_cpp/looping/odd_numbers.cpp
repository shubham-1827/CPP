#include <iostream>
using namespace std;

int main()
{
  // first way
  for (int i = 1; i <= 100; i += 2)
  {
    cout << i << " ";
  }
  cout << endl
       << endl;

  // second way - using continue;
  for (int i = 1; i <= 100; i++)
  {
    if (i % 2 == 0)
      continue;
    cout << i << " ";
  }

  cout << endl;

  return 0;
}