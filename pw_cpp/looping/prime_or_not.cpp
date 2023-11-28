#include <iostream>
using namespace std;

int main()
{
  // what is prime - prime number is a number which has no factors other than 1 and number itself
  // matlab i to n-1 tak koi bhi factor hua toh n prime nahi hoga
  int n;
  cin >> n;

  // first way
  int i;
  for (i = 2; i <= (n - 1); i++)
  {
    if (n % i == 0)
    {
      cout << "not prime, its a composite" << endl;
      break;
    }
  }
  if (n == 1)
    cout << n << " is neither prime nor composite" << endl;
  if (i == n)
    cout << "its a prime" << endl;

  cout << endl;

  // second way
  bool is_prime = true;

  for (int i = 2; i <= (n / 2); i++)
  {
    if (n % i == 0)
    {
      is_prime = false; // means its a composite
      break;
    }
  }
  if (n == 1)
    cout << n << " is neither prime nor composite";
  else if (is_prime)
    cout << n << " is prime";
  else
    cout << n << " is composite";

  cout << endl;

  return 0;
}