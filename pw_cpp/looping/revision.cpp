#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

vector<int> generate_ap(int a, int d, int n) {
  vector<int> res;
  for ( int i = 0; i < n; i++ ) {
    res.push_back(a + i * d);
  }
  return res;
}
vector<int> generate_gp(int a, int r, int n) {
  vector<int> res;
  for ( int i = 0; i < n; i++ ) {
    res.push_back(a);
    a = a * r;
  }
  return res;
}

long long int factorial(int n) {
  if ( n == 0 ) {
    return 1;
  }

  long long int fact = 1;
  for ( int i = 1; i <= n; i++ ) {
    fact *= i;
  }

  return fact;
}

long long int factorial_recursion(int n) {
  if ( n == 0 or n == 1 ) {
    return 1;
  }
  return n * factorial_recursion(n - 1);
}

int fibonnaci_number(int n) {
  if ( n == 0 ) {
    return 0;
  }
  else if ( n == 2 or n == 1 ) {
    return 1;
  }

  int a = 1;
  int b = 1;
  int c;
  for ( int i = 3; i <= n; i++ ) {
    c = a + b;
    a = b;
    b = c;
  }
  return c;
}

// fibonnaci_number using recursion
int fibbonnaci_rec(int n) {
  if ( n == 0 ) {
    return 0;
  }
  else if ( n == 1 or n == 2 ) {
    return 1;
  }
  return fibbonnaci_rec(n - 1) + fibbonnaci_rec(n - 2);
}

int power(int a, int b) {
  if ( a == 0 and b == 0 ) {
    return -1;
  }
  else if ( a == 0 ) {
    return 0;
  }
  else if ( a == 1 ) {
    return 1;
  }
  else if ( b == 0 ) {
    return 1;
  }
  for ( int i = 0; i < b - 1; i++ ) {
    a *= b;
  }
  return a;
}

int power_rec(int a, int b) {
  if ( a == 0 and b == 0 ) {
    return -1;
  }
  else if ( a == 0 ) {
    return 0;
  }
  else if ( a == 1 ) {
    return 1;
  }
  else if ( b == 0 ) {
    return 1;
  }

  return a * power(a, b - 1);
}

bool prime_or_not(int n) {
  if ( n == 1 or n == 2 ) {
    return true;
  }
  for ( int i = 2; i * i <= n; i++ ) {
    if ( n % i == 0 ) {
      return false;
    }
  }
  return true;
}

bool prime_rec(int n, int i) {
  if ( n == 1 or n == 2 ) {
    return true;
  }
  else if ( n % i == 0 ) {
    return false;
  }
  else if ( i * i < n ) {
    return true;
  }
  return prime_rec(n, i - 1);
}

int sum_of_digits(int n) {
  if ( n < 10 ) {
    return n;
  }
  int sum = 0;
  while ( n ) {
    int last = n % 10;
    sum += last;
    n /= 10;
  }
  return sum;
}

void print_factorial(int n, int idx, long long int fact) {
  if ( n == 0 ) {
    cout << 0 << " ";
  }
  else if ( idx > n ) {
    return;
  }
  cout << fact << " ";
  print_factorial(n, idx + 1, fact * (idx + 1));
}

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void swap_without_temp(int &a, int &b) {
  a = a + b;
  b = a - b;
  a = a - b;
}

void swap_using_pointers(int *ptr1, int *ptr2) {
  *ptr1 = *ptr1 + *ptr2;
  *ptr2 = *ptr1 - *ptr2;
  *ptr1 = *ptr1 - *ptr2;
}

bool leap_year(int n) {
  if ( n % 4 == 0 ) {
    if ( n % 100 == 0 ) {
      if ( n % 400 == 0 ) {
        return true;
      }
      else {
        return false;
      }
    }
    else {
      return true;
    }
  }
  else {
    return false;
  }
}

bool armstrong_number(int n) {
  int num = n;
  int sum_of_cubes = 0;

  while ( num ) {
    int last = n % 10;
    sum_of_cubes += last * last * last;
  }

  if ( sum_of_cubes == n ) {
    return true;
  }
  return false;
}

int permutation(int n, int r) {
  return (factorial_recursion(n) / factorial_recursion(n - r));
}
int combinations(int n, int r) {
  return permutation(n, r) / factorial_recursion(r);
}

void pascals_triangle(int n) {
  // using the iCj approach ...
  for ( int i = 0; i < n; i++ ) {
    // now printing the iCj
    for ( int j = 0; j <= i; j++ ) {
      cout << combinations(i, j) << " ";
    }
    cout << endl;
  }
}

void pascals_triangle_optimized_1(int n) {
  // using the formula of n C r+1 = (n-r)/(r+1) (n C r)

  for ( int i = 0; i < n; i++ ) {
    int i_c_0 = 1;
    for ( int j = 0; j <= i; j++ ) {
      cout << i_c_0 << " ";
      i_c_0 = i_c_0 * (i - j) / (j + 1);
    }
    cout << endl;
  }
}

int main() {
  // int a, d, n;
  // cin >> a >> d >> n;

  // vector<int> res = generate_ap(a, d, n);
  // for ( int i = 0; i < res.size(); i++ ) {
  //   cout << res[i] << " ";
  // }
  // cout << endl;

  // vector<int> res_3 = generate_gp(a, d, n);
  // for ( int i = 0; i < res_3.size(); i++ ) {
  //   cout << res_3[i] << " ";
  // }
  // cout << endl;

  int n;
  cin >> n;

  // print_factorial(n, 1, 1);
  // pascals_triangle(n);
  pascals_triangle_optimized_1(n);

  return 0;
}
