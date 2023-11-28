#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  // first way
  for (int i = 1; i <= n; i++)
  {
    for (int j = n; j >= i; j--)
    {
      cout << "* ";
    }
    cout << endl;
  }

  // second way
  //  row no. + no. of stars = n + 1 (this relation holds true for every n)
  // so, no. of stars = n + 1 - row no.
  //  j = n + 1 - i (these are maximum number of stars per row for reverse triangle)
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j >= (n + 1 - i); j++)
    {
      cout << "* ";
    }
    cout << endl;
  }

  return 0;
}
