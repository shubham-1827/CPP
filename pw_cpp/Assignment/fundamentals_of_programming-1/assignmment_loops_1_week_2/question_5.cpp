// Display this GP - 3, 12, 48, ..upto ‘n’ terms.

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int common_ratio = 1;

  for (int i = 1; i <= n; i++)
  {
    cout << common_ratio * 3 << endl;
    common_ratio *= 4;
  }
}