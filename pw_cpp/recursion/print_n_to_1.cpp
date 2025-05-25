#include <iostream>

using namespace std;

void print_1_to_n_aftercall(int n) {
  // printing output of n

  // base case
  if ( n == 0 ) {
    return;
  }
  // recursive call
  print_1_to_n_aftercall(n - 1);

  // this is after the call of recursion
  // so this will start printing after we return from the recursive tree
  cout << n << endl;
}

void print_n_to_1(int n) {
  // printing output of n
  cout << n << endl;

  // base case
  if ( n == 1 ) {
    return;
  }
  // recursive call
  print_n_to_1(n - 1);
}

void print_1_to_n(int n, int i) {
  // we are using a extra variable i and passing it to the next function call
  // to preseve its value

  //base case is i > n then return
  if ( i > n ) {
    return;
  }

  cout << i << endl;
  // recursive call
  print_1_to_n(n, i + 1);
}

int main() {
  int n;
  cin >> n;

  // print_n_to_1(n);
  // print_1_to_n(n, 1);
  print_1_to_n_aftercall(n);

  return 0;
}
