#include <iostream>

using namespace std;

void tower_of_hanoi(int n, char s, char h, char d) {
  if ( n == 0 ) {
    return;
  }
  tower_of_hanoi(n - 1, s, d, h);
  cout << s << " to " << h << endl;
  tower_of_hanoi(n - 1, h, s, d);
}

int main() {
  int n;
  cin >> n;
  tower_of_hanoi(n, 's', 'h', 'd');

  return 0;
}
