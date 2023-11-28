#include <iostream>
using namespace std;

void first_n_fact(int n)
{
  int fact = 1;
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
  cout << "Enter a number: ";
  cin >> n;

  first_n_fact(n);

  return 0;
}