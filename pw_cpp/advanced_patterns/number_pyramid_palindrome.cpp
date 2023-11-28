#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  int count = 1;
  for (int i = 1; i <= n; i++)
  {
    // spaces
    for (int j = 1; j <= (n - i); j++)
    {
      cout << " ";
    }

    // for ascending
    for (int k = 1; k <= i; k++)
    {
      cout << k;
    }

    // for descending
    for (int l = (i - 1); l >= 1; l--)
    {
      cout << l;
    }
    cout << endl;
  }

  // special method 2
  int nsp = n - 1;
  int nwd = 1;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= nsp; j++)
    {
      cout << " ";
    }
    nsp--;

    int count = 1;
    for (int k = 1; k <= nwd; k++)
    {
      cout << count;
      if (k >= (nwd / 2 + 1))
      {
        count--;
      }
      else
      {
        count++;
      }
    }
    nwd += 2;
    cout << endl;
  }

  return 0;
}