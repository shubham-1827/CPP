#include <iostream>

using namespace std;

// paramerterized sum using recursion
void sum(int n, int s) {
  if ( n == 0 ) {
    cout << s << endl;
    return;
  }
  sum(n - 1, s + n);
}

//Second way : non parameterized sum using recursion
int sum_1(int n) {
  if ( n == 0 ) {
    return 0;
  }
  return n + sum_1(n - 1);
}

int main() {
  int n;
  cin >> n;

  // sum(n, 0);
  cout << sum_1(n) << endl;

  return 0;
}
