#include <iostream>
using namespace std;

int main()
{
  int n, a = 1, cr = 2;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cout << a << " ";
    a *= cr;
  }
}