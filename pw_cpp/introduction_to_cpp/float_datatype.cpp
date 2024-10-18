#include <iostream>
using namespace std;

int main() {
  float x = 5;
  float y = 2;

  cout << x / y << endl;

  cout << 5 / 2 << endl;     // 2
  cout << 5.0 / 2 << endl;   // float with integer always gives a float - 2.5
  cout << 5 / 2.0 << endl;   // 2.5
  cout << 5.0 / 2.0 << endl; // 2.5

  // you can store integers inside float but you cant store floats inside
  // integers
  float z = 10;
  cout << z << endl;

  int a = 2.1; // this line may generate a warning of implicit conversion from
               // float to integer
  cout << a << endl; // this will print 2 not 2.1

  float c = 5.0;
  cout << c << endl; // 5 not 5.0
  cout << 7.0 << endl;

  cout << endl << endl;

  // find the remainder
  int p = 10;
  int q = 3;

  // dividend = divisor*qouteint + remainder
  int ans = p / q; // this will give qouteint , integer integer division
  int remainder = p - (q * ans);

  cout << remainder << endl;

  // modulo operator

  int r = p % q;

  cout << r << endl;

  // properties of modulo
  // 1. if a>b then, a%b = remainder
  cout << 10 % 3 << endl;

  // 2. if a<b then, a%b = a
  cout << 3 % 10 << endl;

  // 3. a%(-b) = a%b
  cout << 10 % (-3) << endl;

  // 4. (-a)%b = -(a%b)
  cout << (-10) % 3 << endl;

  cout << (-10) % (-3) << endl;

  // 5. a%b -- where a and b must be a integer
  // float first = 10;
  // float second = 3;

  // int r = first % second; this will generate a error
  return 0;
}
