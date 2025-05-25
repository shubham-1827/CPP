#include <iostream>
#include <string>

using namespace std;

string skip_using_for(string &s) {
  string res;
  for ( auto x : s ) {
    if ( x != 'a' ) {
      res += x;
    }
  }
  return res;
}

// in the below recursive solution, we are creating or say copying a new string everytime
// we are doing s.substr(1) which is very bad for space complexity so we can
// use another idx to check for the first character in every call
void skip_using_recursion(string s, string res) {
  if ( s.empty() ) {
    cout << res << endl;
    return;
  }
  char first_character = s[0];
  if ( first_character == 'a' ) {
    skip_using_recursion(s.substr(1), res);
  }
  else {
    skip_using_recursion(s.substr(1), res + first_character);
  }
}

void skip_using_recursion_idx(string s, char ch, string res, int idx) {
  if ( idx == s.size() ) {
    cout << res << endl;
    return;
  }
  char first_character = s[idx];
  if ( first_character == ch ) {
    skip_using_recursion_idx(s, ch, res, idx + 1);
  }
  else {
    skip_using_recursion_idx(s, ch, res + first_character, idx + 1);
  }
}
int main() {
  string s;
  getline(cin, s);

  // string res = skip_using_for(s);
  // cout << res << endl;
  // skip_using_recursion(s, "");
  char ch;
  cin >> ch;
  skip_using_recursion_idx(s, ch, "", 0);

  return 0;
}
