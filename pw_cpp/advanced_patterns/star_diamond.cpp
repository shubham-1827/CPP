#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number : ";
  cin >> n;

  int nst = 1;
  int nsp = (n - 1);
  for (int i = 1; i <= (2 * n - 1); i++)
  {
    for (int j = 1; j <= nsp; j++)
    {
      cout << "  ";
    }

    for (int k = 1; k <= nst; k++)
    {
      cout << "* ";
    }

    if (i >= n) // i = n tak spaces ko ghatate raho aur stars ko 2 se badhate raho then spaces ko badhao aur star ghatao
    {
      nsp++;
      nst -= 2;
    }

    else
    {
      nsp--;
      nst += 2;
    }

    cout << endl;
  }
}