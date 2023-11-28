#include <iostream>
using namespace std;

int main()
{
  int n, a = 1, cd = 2;
  cin >> n;

  // a = 1, cd = 2, print upto n terms
  for (int i = 1; i <= n; i++)
  {
    cout << a << " ";
    a += cd;
  }
  cout << endl;
  cout << endl;

  a = 1;
  // another way - mathematical formula
  for (int i = a; i <= (a + (n - 1) * cd); i += cd)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}