#include <iostream>

using namespace std;

void fun(int n) {
  if ( n == 0 ) {
    return;
  }
  cout << "this is recursive call " << n << endl;
  fun(n - 1);
}

int main() {
  int n;
  cin >> n;

  // recursion basically means function calling itself over and over again until
  // a particular task is acheived
  //we use recursion in the problems where the
  // problem can be solved by dividing into smaller sub problem

  // fun() in a example of a recursive function call
  fun(n);

  return 0;
}
