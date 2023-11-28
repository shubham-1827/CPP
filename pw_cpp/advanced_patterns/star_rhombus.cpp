#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= (n - i); j++)
    {
      cout << " ";
    }
    for (int k = 1; k <= n; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  // second way - math way - first star ki position is (i+j) == n+1

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if ((i + j) == (n + 1))
      {
        for (int k = 1; k <= n; k++)
          cout << "*";
        cout << endl;
        break;
      }
      else
      {
        cout << " ";
      }
    }
  }
  return 0;
}