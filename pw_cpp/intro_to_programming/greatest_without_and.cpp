#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  if (a >= b)
  {
    if (a >= c)
    {
      cout << a;
    }
    else
    {
      cout << c;
    }
  }
  else
  {
    if (b >= c)
    {
      cout << b;
    }
    else
    {
      cout << c;
    }
  }

  cout << " is greatest" << endl;

  return 0;
}