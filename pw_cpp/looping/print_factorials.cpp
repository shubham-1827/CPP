#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  // using the property - n! = n * (n-1)!
  long long int factorial = 1;
  for (int i = 1; i <= n; i++)
  {
    factorial *= i;
    cout << factorial << " ";
  }
  cout << endl;

  return 0;
}