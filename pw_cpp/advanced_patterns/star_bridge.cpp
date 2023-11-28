#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  int nsp = 1;
  int nst = (n - 1);
  for (int i = 1; i <= (2 * n - 1); i++) // this one straight line is separated, it makes it easy to print remaining one
  {
    cout << "*";
  }
  cout << endl;
  for (int i = 1; i <= (n - 1); i++)
  {
    for (int j = 1; j <= nst; j++)
    {
      cout << "*";
    }
    for (int k = 1; k <= nsp; k++)
    {
      cout << " ";
    }
    for (int j = 1; j <= nst; j++)
    {
      cout << "*";
    }
    nsp += 2;
    nst--;
    cout << endl;
  }

  // second way
  for (int i = 1; i <= (2 * n - 1); i++) // this one straight line is separated
  {
    cout << "*";
  }
  cout << endl;
  int m = n - 1;
  for (int i = 1; i <= m; i++)
  {
    for (int j = (m - i + 1); j >= 1; j--)
    {
      cout << "*";
    }
    for (int k = 1; k <= (2 * i - 1); k++)
    {
      cout << " ";
    }
    for (int j = (m - i + 1); j >= 1; j--)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}