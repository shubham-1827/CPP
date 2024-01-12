#include <iostream>
using namespace std;
int main()
{
  int a = 18;
  int b = 12;
  bool t = (a > 20 && b < 15) ? true : false; // false bcz a is not greater than 20
  cout << "Value of t: " << t;
  return 0;
}

// output : value of t: 0