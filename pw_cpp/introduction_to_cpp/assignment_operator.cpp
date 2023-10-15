#include <iostream>
using namespace std;

int main()
{
  int x = 3;
  int y = 5;

  cout << x + y << endl;
  cout << y - x << endl;
  cout << x * y << endl;

  x = 2;

  // in cpp, integer divided by integer will always gives the integer
  cout << y / x << endl;
  cout << endl
       << endl;

  // increment and decrement operators
  int z = 10;

  cout << z << endl; // 10
  z++;               // z = z + 1
  cout << z << endl; // 11
  ++z;               // z = z + 1
  cout << z << endl; // 12

  z--;               // z = z - 1
  cout << z << endl; // 11
  --z;               // z = z - 1
  cout << z << endl; // 10

  cout << z++ << endl; // post increment : first print then increase - 10
  cout << ++z << endl; // pre increment : fist increase then print - 12

  cout << z-- << endl; // post decrement : first print then decrease - 12
  cout << --z << endl; // pre decrement : first decrease then print - 10

  return 0;
}