// Print first ‘n’ fibonacci numbers.
// Sample Input : 10
// Output : 1 1 2 3 5 8 13 21 34 55

#include <iostream>
using namespace std;

void fibonacci_printer(int n)
{
  int a = 1;
  int b = 1;
  int c = 0;

  for (int i = 1; i <= n; i++)
  {
    c = a + b;
    cout << a << " ";
    a = b;
    b = c;
  }
  cout << endl;
}
int main()
{
  int n;
  cin >> n;

  fibonacci_printer(n);

  return 0;
}