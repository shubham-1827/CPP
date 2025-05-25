#include <iostream>
using namespace std;

long long int factorial(int x) {
  long long int f = 1;
  for (int i = 1; i <= x; i++) {
    f *= i;
  }
  return f;
}

int permutations(int n, int r) {
  long long int n_fact = factorial(n);
  long long int n_r_fact = factorial(n - r);

  int p = n_fact / n_r_fact;
  return p;
}

int combinations(int n, int r) {
  long long int r_fact = factorial(r);
  int c = permutations(n, r) / r_fact;

  return c;
}
// using the formula :
// n c r+1 = n c r (n-r)/(r+1)
// in each row we are calculating the forward value with the previous value
// using this formula we dont need to call any functions while using this
// formula

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  for (int i = 0; i <= n; i++) {
    int i_c_0 = 1;
    for (int j = 0; j <= i; j++) {
      cout << i_c_0 << " ";
      i_c_0 *= (i - j) / (j + 1);
    }
    cout << endl;
  }

  return 0;
}
