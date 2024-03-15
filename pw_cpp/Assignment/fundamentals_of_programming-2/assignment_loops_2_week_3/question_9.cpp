// Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
// each digit of the number is equal to the number itself, then the number is called an Armstrong number.
// For example, 153 = (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3)
// Output : 1 153 370 371

#include <iostream>
using namespace std;

void armstrong_printer(int n)
{

  for (int i = 1; i <= n; i++)
  {
    int sum = 0;
    int count = 0;

    int num = i;
    // count unit
    while (num > 0)
    {
      count++;
      num /= 10;
    }
    num = i;

    // power calculation
    while (num > 0)
    {
      int last_digit = num % 10;
      int power = 1;
      for (int j = 0; j < count; j++)
      {
        power *= last_digit;
      }
      sum += power;
      num /= 10;
    }

    if (sum == i)
    {
      cout << i << " ";
    }
  }
  cout << endl;
}
int main()
{
  int n;
  cin >> n;

  armstrong_printer(n);

  return 0;
}