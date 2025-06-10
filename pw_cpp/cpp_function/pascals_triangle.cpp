#include <iostream>
using namespace std;

long long int factorial(int x) {
  long long int f = 1;
  for ( int i = 1; i <= x; i++ ) {
    f *= i;
  }
  return f;
}

float permutations(int n, int r) {
  long long int n_fact = factorial(n);
  long long int n_r_fact = factorial(n - r);

  float p = n_fact / n_r_fact;
  return p;
}

float combinations(int n, int r) {
  long long int r_fact = factorial(r);
  float c = permutations(n, r) / r_fact;

  return c;
}

void pascals_triangle(int n) {
  for ( int i = 0; i <= n; i++ ) {
    for ( int j = 0; j <= i; j++ ) {
      int val = combinations(i, j);
      cout << val << " ";
    }
    cout << endl;
  }
}
int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  pascals_triangle(n);

  return 0;
}

// in pascals triangle :

/*
   0 1 2 3 4

0  1
1  1 1
2  1 2 1
3  1 3 3 1
4  1 4 6 4 1

if we pick any value from it , it will be equal to row combination column
like ,
  6 = 4 c 2 (4 = row no. , 2 = col no.)

note : n c 0 = 1, and n c 1 = n
*/
