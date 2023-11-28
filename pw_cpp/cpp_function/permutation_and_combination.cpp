#include <iostream>
using namespace std;

long long int factorial(int x)
{
  long long int f = 1;
  for (int i = 1; i <= x; i++)
  {
    f *= i;
  }
  return f;
}

float permutations(int n, int r)
{
  long long int n_fact = factorial(n);
  long long int n_r_fact = factorial(n - r);

  float p = n_fact / n_r_fact;
  return p;
}

float combinations(int n, int r)
{
  long long int r_fact = factorial(r);
  float c = permutations(n, r) / r_fact;

  return c;
}

int main()
{
  int n, r;
  cout << "Enter n and r : ";
  cin >> n >> r;

  cout << "Permutations : " << permutations(n, r) << endl;
  cout << "Combinations : " << combinations(n, r) << endl;

  return 0;
}