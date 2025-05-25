#include <iostream>
#include <string>

using namespace std;

int main() {

  // NOTE in cpp, strings are mutable but in java strings are immutable
  string s;
  getline(cin, s);

  for (int i = 0; i < s.size(); i++) {
    if (!(i % 2)) {
      s[i] = 'a';
    }
  }
  cout << s << endl;

  return 0;
}
