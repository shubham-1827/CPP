#include <iostream>

using namespace std;

// time complexity - O(log(b))
// this is the logarithmic time complexity solution
int power_log(int a, int b) {
  if ( a == 0 ) {
    if ( b == 0 ) {
      cout << "not defined!!!!" << endl;
      return -100;
    }
    return 0;
  }
  if ( b == 0 )
    return 1;
  else if ( b == 1 )
    return a;

  // we are calling power_log function just one time and still we are getting
  // the final value in less iterations that is 2 * log(b) times
  // thats why the time complexity of this is O(log(b))
  int half = power_log(a, b / 2);

  // this is to check if the power that is b is even or odd
  // because if will affect the output
  if ( b % 2 ) {
    return a * half * half;
  }
  else {
    return half * half;
  }
}

// time complexity - O(b)
int power(int a, int b) {
  if ( a == 0 ) {
    if ( b == 0 ) {
      cout << "not defined!!!!" << endl;
      return -100;
    }
    return 0;
  }
  if ( b == 0 )
    return 1;
  else if ( b == 1 )
    return a;

  return a * power(a, b - 1);
}

int main() {
  int a, b;
  cin >> a >> b;
  // a = 4;
  // b = 2;

  cout << power_log(a, b) << endl;

  return 0;
}
