#include <iostream>
using namespace std;

int main() {
  // boolean can only store two values true and false
  //  true = 1 = on
  //  false = 0 = off
  bool x = true;
  bool y = false;

  cout << x << endl << y << endl;

  cout << (7 > 5) << endl;
  cout << (7 == 7) << endl;
  cout << (7 <= 6) << endl;

  bool z = 1, w = 0, v = 8; // any number other than 1 is also true

  cout << z << endl << w << endl << v << endl;

  return 0;
}
