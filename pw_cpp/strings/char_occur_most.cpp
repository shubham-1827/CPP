#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

void char_occuring_most(string &s) {
  // empty string checks
  if (s.empty()) {
    return;
  }

  // we are first sorting to arrange the characters in ascending order
  // what sorting do is, if my input is like abbcccaaabbaac
  // then after sorting it will become aaaaaabbbbcccc
  sort(s.begin(), s.end());

  // then we are iterating over the array to grab the most occuring one
  int max_count = 0;
  char most_occuring = s[0];
  int local_count = 0;
  char current_ch = s[0];
  for (int i = 0; i < s.size(); i++) {
    if (current_ch == s[i]) {
      local_count++;
    } else {
      current_ch = s[i];
      local_count = 1;
    }
    if (local_count > max_count) {
      max_count = local_count;
      most_occuring = current_ch;
    }
  }
  cout << most_occuring << " " << max_count << endl;
}

int main() {

  string s;
  cin >> s;

  char_occuring_most(s);

  return 0;
}
