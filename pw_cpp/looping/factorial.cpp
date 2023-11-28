#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  // 5! = 5 * 4 * 3 * 2 * 1
  // 0! = 1 , pucho mat bas jaan lo
  long long int factorial = 1;
  for (int i = 1; i <= n; i++)
  {
    factorial *= i;
  }
  cout << factorial << endl;

  return 0;
}