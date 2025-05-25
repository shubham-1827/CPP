#include <iostream>

using namespace std;

long long int factorial(int n) {
  // lets take the example of n = 5
  // f5 = 5 * f4
  // f4 = 4 * f3
  // f3 = 3 * f2
  // f2 = 2 * f1
  // f1 = 1 * f0
  // f0 is the base case from here we will return up the tree
  // (f0 is 1)

  // base case
  if ( n == 0 or n == 1 ) {
    return 1;
  }
  // recursive call
  return n * factorial(n - 1);
}

int main() {
  int n;
  cin >> n;

  long long int res = factorial(n);
  cout << res << endl;

  return 0;
}
