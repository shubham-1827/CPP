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
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  // second way - with maths - notice karo ki star wali condition kab ayegi

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if ((j + i) >= (n + 1))
        cout << "*";

      else
        cout << " ";
    }
    cout << "\n";
  }

  return 0;
}