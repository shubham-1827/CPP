#include <iostream>
using namespace std;
int main()
{
  int a = 5, b, c;
  b = a = 15; // assignment from right to left
  c = a < 15; // a < 15 is false so c = 0
  cout << "a = " << a << ", b = " << b << " , c = " << c;
  return 0;
}

// output will be : a = 15, b = 15, c = 0