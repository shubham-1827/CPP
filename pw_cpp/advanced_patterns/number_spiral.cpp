#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  for (int i = 1; i <= (2 * n - 1); i++)
  {
    int a = n;
    for (int j = 1; j <= (2 * n - 1); j++)
    {
      cout << a << " ";
      if (i <= n)
      {
        if (i > j)
          a--;
        else if ((i + j) >= 2 * n)
          a++;
      }
      else
      {
        if ((2 * n - i) > j)
          a--;
        else if (((2 * n - i) + j) >= 2 * n)
          a++;
      }
    }
    cout << endl;
  }
}