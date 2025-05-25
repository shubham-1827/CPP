#include <iostream>

using namespace std;

// to better visualize this make a euler tour tree to see how the calls are working
// or you can also try making a call stack to visualize as well
void pre_in_post(int n) {
  if ( n == 0 ) {
    cout << "return call " << n << endl;
    return;
  }
  cout << "pre " << n << endl;
  pre_in_post(n - 1);
  cout << "in " << n << endl;
  pre_in_post(n - 1);
  cout << "post " << n << endl;
}

void pre_in_post_2(int n) {
  if ( n == 0 ) {
    cout << "return call " << n << endl;
    return;
  }
  cout << "pre " << n << endl;
  pre_in_post_2(n - 1);
  cout << "in_a " << n << endl;
  pre_in_post_2(n - 1);
  cout << "in_b " << n << endl;
  pre_in_post_2(n - 1);
  cout << "post " << n << endl;
}

int main() {
  // pre in post in recursion
  // kaam - pre work that is done before the recursive call (Pre)
  // call 1
  // kaam - the work that is done in between 2 recursive calls (in)
  // call 2
  // kaam - post work after the call (post)

  int n;
  cin >> n;
  // pre_in_post(n);
  pre_in_post_2(n);

  return 0;
}
