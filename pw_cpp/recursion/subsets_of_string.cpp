#include <iostream>
#include <string>

using namespace std;

void generate_subsets(const string &s, string res, int idx) {
  if ( idx == s.size() ) {
    if ( res == "" )
      cout << "_" << endl;
    cout << res << endl;
    return;
  }
  // the basic idea is :
  // we pick a character and then think
  // in a combination i have 2 choices, either to include a particular character or dont include it.
  // so in the first call we go ahead by always including the first character,
  // and in the second call we go ahead by never including the first character
  // but we need to decrease the first character from the original string everytime we do this....
  char first_character = s[idx];

  // the firstt call is to include the character
  generate_subsets(s, res + first_character, idx + 1);
  // the second call is without including the character
  generate_subsets(s, res, idx + 1);
  // if we flip the order of above resursive call then
  // the order of output will flip
}

int main() {
  string s;
  // input a string with all unique characters
  cin >> s;

  generate_subsets(s, "", 0);

  return 0;
}
