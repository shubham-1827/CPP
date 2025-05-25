#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

// this is just the same version of bad recursive solution below in for loops
// time complexity is O(min(a, b))
int gcd(int a, int b) {
  for ( int i = min(a, b); i >= 2; i-- ) {
    if ( a % i == 0 and b % i == 0 ) {
      return i;
    }
  }
  return 1;
}

// this is bad,
// like for just the case of 10000 and 10001 the recursions runs for 10000 times
// time complexity is O(min(a, b))
int gcd_rec(int a, int b, int min) {
  if ( min == 1 or (a % min == 0 and b % min == 0) ) {
    return min;
  }
  return gcd_rec(a, b, min - 1);
}

// this is super fast,
// this is also known as Euclids division algorithms
// in this , if we take 10000 and 10001 only 2 moves will give ans 1
// how this works ,
// if remainder is not zero, then remainder will become the new divisor
// and the old divisor will become the new dividend
int gcd_euclids(int &a, int &b, int dividend, int divisor) {
  int remainder = dividend % divisor;
  if ( remainder ) {
    return gcd_euclids(a, b, divisor, remainder);
  }
  else {
    return divisor;
  }
}

// in this case a is the divisor and b is the dividend
// it doenst matter if a is small or larger than b
// ex : a = 45 and b = 27
// gcd(b % a, a) -> gcd(27 % 45, 45) -> gcd(27, 45)
// so see , after the first call, the first parameter already becomes smaller

// NOTE Time complexity of this euclids algorithms is O(log(a+b)) and,
// it is calculated using induction.
int gcd_small_code(int a, int b) {
  if ( a == 0 ) {
    return b;
  }
  // this is doing the same thing as above,
  // passing remainder as divisor and a which is the previous divisor as dividend
  else {
    return gcd_small_code(b % a, a);
  }
}

int main() {
  int a, b;
  cin >> a >> b;

  // cout << gcd(a, b) << endl;

  // cout << gcd_rec(a, b, min) << endl;
  // cout << gcd_euclids(a, b, a, b) << endl;

  cout << gcd_small_code(a, b) << endl;

  return 0;
}
