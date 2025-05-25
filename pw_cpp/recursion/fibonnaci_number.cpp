#include <iostream>

using namespace std;

int fibonnaci_number(int n) {
  if ( n == 1 or n == 2 ) {
    return 1;
  }
  else if ( n == 0 ) {
    return 0;
  }
  return fibonnaci_number(n - 1) + fibonnaci_number(n - 2);
}

int main() {
  int n;
  cin >> n;

  cout << fibonnaci_number(n) << endl;

  return 0;
}
