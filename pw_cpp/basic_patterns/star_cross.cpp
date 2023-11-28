#include <iostream>
using namespace std;

int main()
{
  int n; // n is odd
  cout << "Enter an odd integer: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (j == i or j == (n - i + 1)) // j == i for first diagonal and j == n-i+1 for second diagonal
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }

  return 0;
}