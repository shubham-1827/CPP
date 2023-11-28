#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  // this is just printing reverse
  while (n != 0)
  {
    int last_digit = n % 10;
    cout << last_digit;
    n /= 10;
  }

  cout << endl;

  // this is really reversing the value and storing it in variable

  cin >> n;
  int reverse = 0;

  while (n != 0)
  {
    int last_digit = n % 10; // this will take the last digit

    reverse = reverse * 10 + last_digit; // just pick up a copy and solve this you will understand

    n /= 10;
  }

  cout << reverse << endl;
  return 0;
}