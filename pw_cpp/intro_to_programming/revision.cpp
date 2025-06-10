#include <iostream>

using namespace std;

bool odd_or_even(int n) { return (n % 2 == 0) ? true : false; }

bool triangle_sides(int a, int b, int c) {
  if ( a > b and a > c ) {
    return true;
  }
  else if ( b > a and b > c ) {
    return true;
  }
  else if ( c > a and c > b ) {
    return true;
  }
  else {
    return false;
  }
}

float calculator(float a, float b, char ch) {
  switch ( ch ) {
    case '+':
      return a + b;
    case '-':
      return a - b;
    case '*':
      return a * b;
    case '/':
      return a / b;
    case '%':
      return (int)a % (int)b;
    default:
      return -1;
  }
}

int greatest_without_and(int a, int b, int c) {
  if ( a > b ) {
    if ( a > c ) {
      return a;
    }
  }
  else {
    if ( b > a ) {
      if ( b > c ) {
        return b;
      }
      else {
        return c;
      }
    }
  }
  return -1;
}

int absolute_value(int n) { return (n < 0) ? -n : n; }

int count_digits(int n) {
  int count = 0;
  while ( n ) {
    count++;
    n /= 10;
  }
  return count;
}

int main() {
  // int a, b;
  // char ch;
  // cin >> a >> ch >> b;
  // cout << calculator(a, b, ch) << endl;
  // int a, b, c;
  // cin >> a >> b >> c;

  // cout << greatest_without_and(a, b, c) << endl;

  int n;
  cin >> n;
  cout << count_digits(n) << endl;

  return 0;
}
