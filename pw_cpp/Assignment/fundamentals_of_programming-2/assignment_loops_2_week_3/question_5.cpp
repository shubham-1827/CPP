// WAP to print the sum of all the even digits of a given number.
// Sample Input : 4556
// Output : 10

#include <iostream>
using namespace std;

int main()
{
  int n, sum = 0;
  cin >> n;

  while (n > 0)
  {
    int last_digit = n % 10;
    if (last_digit % 2 == 0)
    {
      sum += last_digit;
    }
    n /= 10;
  }
  cout << sum << endl;
  return 0;
}