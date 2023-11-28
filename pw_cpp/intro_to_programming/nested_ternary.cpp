#include <iostream>
using namespace std;

int main()
{
  int x;

  x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20
                              : 30; // this will evaluate to 20, there are two ternary operators
                                    // this is the case of nested ternary operators
                                    // we will go from right to left while solving nested ternary operators

  cout << x;

  return 0;
}