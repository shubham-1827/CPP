// Print the factorials of first ‘n’ numbers
// Sample Input : 10
// Output : 1 2 6 24 120 720 5040 40320 362880 3628800

#include <iostream>
using namespace std;

void factorial(int n)
{
  long long int fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
    cout << fact << " ";
  }
  cout << endl;
}
int main()
{
  int n;
  cin >> n;

  factorial(n);

  return 0;
}