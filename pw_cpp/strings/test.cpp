#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  // your code goes here
  string s;
  getline(cin, s);

  if (s.size() > 5) {
    reverse(s.begin() + 3, s.begin() + 5);
  }

  return 0;
}
