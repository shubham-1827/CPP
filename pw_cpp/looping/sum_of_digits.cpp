#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int sum = 0;

  while (n != 0)
  {
    int last_digit = n % 10; // if you divide any number with 10 the remainder will be its last digit always
    sum += last_digit;

    n /= 10; // this will reduce the no. of digits by 1
  }
  cout << sum << endl;

  return 0;
}