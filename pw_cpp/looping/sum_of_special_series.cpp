#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  // first way - using loops

  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      sum -= i;
      continue;
    }
    sum += i;
  }

  cout << sum << endl;

  // second way - using maths
  // 1 - 2 + 3 - 4 ... = (1-2) + (3-4) ...
  // so if n = 4 output will be -2, which is -4/2 so for any n output is -n/2

  sum = 0;

  if (n % 2 == 0)
    sum = -n / 2;
  else
    sum = -n / 2 + n;

  cout << sum << endl;

  return 0;
}