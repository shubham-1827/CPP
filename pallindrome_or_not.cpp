#include <iostream>
using namespace std;

void is_palindrome(int n)
{
  long long int reverse_n = 0;
  long long int num = n;
  while (num > 0)
  {
    int last_digit = num % 10;
    reverse_n = reverse_n * 10 + last_digit;
    num /= 10;
  }

  if (reverse_n == n)
  {
    cout << "Number is a palindrome" << endl;
  }
  else
  {
    cout << "Number is not a palindrome" << endl;
  }
}
int main()
{
  long long int n;
  cout << "Enter the number : ";
  cin >> n;

  is_palindrome(n);

  return 0;
}