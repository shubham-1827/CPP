#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  // jitni power nikalni hai , utni baar loop chalao, like a raise to b is a*a*a .... (b times)

  int product = 1;
  if (n == 0 and m == 0)
  {
    cout << "No solution" << endl;
  }
  else
  {
    for (int i = 1; i <= (m >= 0 ? m : -m); i++) // ternary operator - if m is negative do -m
    {
      product *= n;
    }
    if (m >= 0)
    {
      cout << product << endl;
    }
    else
    {
      cout << (float)1 / product << endl; // this is for negative powers a tp the power -b is 1 upon a to the power b
    }
  }

  return 0;
}