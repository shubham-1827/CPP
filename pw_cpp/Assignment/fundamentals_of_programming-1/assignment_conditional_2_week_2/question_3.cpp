#include <iostream>
using namespace std;
int main()
{
  int x = 3;
  float y = 3.0;
  if (x == y) // during comparision 3 will be converted into 3.0 through implicit typecasting
    cout << "x and y are equal";
  else
    cout << "x and y are not equal";
  return 0;
}

// output : x and y are equal