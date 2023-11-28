#include <iostream>
using namespace std;

int main()
{
  // problem 1
  int x = 3, y, z;
  y = x = 10;
  z = x < 10;
  cout << "x : " << x << ", y : " << y << ", z : " << z << endl; // x = 10, y = 10, z = 0
  cout << endl;

  // problem 2
  int k = 35;

  cout << (k == 35) << endl
       << (k = 50) << endl
       << (k > 40) << endl; // 1 , 50, 1

  return 0;
}