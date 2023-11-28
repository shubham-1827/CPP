#include <iostream>
using namespace std;

int gcd(int a, int b)
{

  int min;
  if (a < b)
    min = a;
  else
    min = b;

  for (int i = min; i >= 2; i--)
  {
    if ((a % i == 0) && (b % i == 0))
      return i;
  }
}
int main()
{
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  cout << "gcd of " << a << " and " << b << " : " << gcd(a, b) << endl;

  return 0;
}