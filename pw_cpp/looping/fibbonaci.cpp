#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  /*
  algorithm :
  a = 1
  b = 1

  c = a + b
  a = b
  b = c
  */
  int x = 1, y = 1, z;
  for (int i = 1; i <= (n - 2); i++) // n-2 bcz fib series me starting 2 toh predefined hain series n = 3 se start hogi,
                                     // so n = 3 we want the loop to run only once
  {
    z = x + y;
    x = y;
    y = z;
  }
  cout << y << endl; // using y instead of z bcz , 1 pe loop run nahi hoga, 2 pe bhi loop run nahi hoga toh y = 1 hi
  // rahega aur n = 1 and 2 pe value 1 print hogi , phir n = 3 se loop run hoga aur y update hoga

  return 0;
}