#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    // for spaces
    for (int j = 1; j <= (n - i); j++)
    {
      cout << " ";
    }

    // for stars
    for (int k = 1; k <= (2 * i - 1); k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  // method 2 - special way

  int nst = 1;     // no. of stars for first row
  int nsp = n - 1; // no. of spaces for first row
  // we will update this nst and nsp for each row

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= nsp; j++)
    {
      cout << " ";
    }
    nsp--; // for each row stars decreases by 1

    for (int k = 1; k <= nst; k++)
    {
      cout << "*";
    }
    nst += 2; // for each row star increases by 2
    cout << endl;
  }

  return 0;
}