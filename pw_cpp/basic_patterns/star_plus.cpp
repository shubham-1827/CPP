#include <iostream>
using namespace std;

int main()
{
  int n; // n is always odd
  cout << "Enter an odd number: ";
  cin >> n;

  int mid = n / 2 + 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == mid or j == mid) // agar row mid ke barabar toh star yaa column mid ke barabar toh star
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }

  return 0;
}