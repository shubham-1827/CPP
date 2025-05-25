#include <iostream>

using namespace std;

int main() {

  // given a string of numbers 0 to 9
  string s;
  cin >> s;

  int max_idx = 0;
  char current_ch = s[0];
  for (int i = 1; i < s.size(); i++) {
    if (s[i] > s[max_idx]) {
      max_idx = i;
      current_ch = s[i];
    }
  }

  cout << max_idx << endl;

  return 0;
}
