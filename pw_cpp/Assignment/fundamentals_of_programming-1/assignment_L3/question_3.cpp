// Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. //
//(Considering leap year occurs after every 4 years)

// a year is leap year if year is divisible by 4 and century year(like 2400, 2000) is divisible by 100 and 400 both
#include <iostream>
using namespace std;

int main()
{
  int year;
  cout << "Enter a year: ";
  cin >> year;

  bool is_leap = true;

  if (year % 4 == 0)
  {
    if (year % 100 == 0 and year % 400 != 0)
    {
      is_leap = false;
    }
  }
  else
  {
    is_leap = false;
  }

  if (is_leap)
  {
    cout << year << " is a leap year." << endl;
  }
  else
  {
    cout << year << " is not a leap year." << endl;
  }
}
