#include <iostream>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  int i = 1;
  if (a <= b)
  {
    i = a;
  }
  else
  {
    i = b;
  }

  int gcd = 1;

  for (int j = 1; j <= i; j++)
  {
    if (a % j == 0 and b % j == 0)
    {
      gcd = j;
    }
  }
  cout << "gcd of " << a << " , " << b << " is " << gcd << endl;

  return 0;
}
