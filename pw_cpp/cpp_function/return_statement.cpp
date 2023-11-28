#include <iostream>
using namespace std;

int max(int a, int b, int c) // a function can have multiple return statement, but only one can hit
// multiple return statements can return same value or different values
{
  if (a >= b && a >= c)
    return a;
  else if (b >= a && b >= c)
    return b;
  else
    return c;
}
int main()
{
  int a, b, c;
  cout << "Enter three numbers: ";
  cin >> a >> b >> c;

  cout << max(a, b, c) << endl;

  return 0;
}