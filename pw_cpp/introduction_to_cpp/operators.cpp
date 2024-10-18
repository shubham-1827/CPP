#include <iostream>
using namespace std;

int main() {
  int x = 10;
  cout << (x = 7) << endl;

  int y = 8;

  // relational operators
  cout << (y == 8) << endl;
  cout << (x != 7) << endl;
  cout << (x > 5) << endl;
  cout << (x >= 6) << endl;
  cout << (y <= 4) << endl;
  cout << (y < 5) << endl;

  // assignment operators
  x += 2;
  cout << x << endl;

  y -= 4;
  cout << y << endl;

  y *= 2;
  cout << y << endl;

  y %= 4;
  cout << y << endl;

  bool p = false;
  bool q = false;
  bool r = true;

  cout << (p == q == r) << endl; // 1

  // heirarchy of operators

  float a = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 2; // first we will calculate *, /
  cout << a << endl;

  // priority - () > (%, *, /) > (+, -) > (>, >=, <, <=) > (==, !=)

  int s = 5, t = 10;
  s += t -= s; // in this case we will calculate from right to left
  cout << s << " " << t << endl;

  return 0;
}
