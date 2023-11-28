#include <iostream>
using namespace std;

int main()
{
  // ap -100, 97, 94 ....

  for (int i = 100; i >= 0; i -= 3)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}