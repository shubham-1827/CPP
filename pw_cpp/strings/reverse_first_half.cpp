#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {

  string s;
  getline(cin, s);

  int half = s.size() / 2; // size is even so no problem
  reverse(s.begin(), s.begin() + half + 1);

  cout << s << endl;

  return 0;
}
