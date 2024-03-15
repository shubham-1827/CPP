// Display this AP - 4, 7, 10, 13, 16.. upto ‘n’ terms.

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cout << (4 + (i - 1) * 3) << " ";
  }
  cout << endl;
}