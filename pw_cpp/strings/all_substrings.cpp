#include <iostream>
#include <string>

using namespace std;

void print_substrings(string &s) {
  for (int i = 0; i < s.size(); i++) {
    for (int j = i; j < s.size(); j++) {
      for (int k = i; k <= j; k++) {
        cout << s[k] << " ";
      }
      cout << endl;
    }
  }
}

int main() {

  string s;
  getline(cin, s);

  print_substrings(s);

  return 0;
}
