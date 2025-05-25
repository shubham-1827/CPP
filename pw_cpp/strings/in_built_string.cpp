#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {

  string s;
  getline(cin, s);

  // there are these main in built functions for strings
  // 1. s.size() or s.length()
  // both do the same thing
  cout << s.size() << endl;
  cout << s.length() << endl;

  // 2. push_back() and pop_back()
  // these works same as vectors
  s.push_back('a');
  cout << s << endl;
  s.pop_back();
  cout << s << endl;

  // 3. + operator for strings
  // this is used to concatenate strings
  s = s + 'a'; // can add a character
  cout << s << endl;

  s = s + "abcdef"; // can also append full strings
  cout << s << endl;

  s = "abc" + s; // this add abc to the start of s
  cout << s << endl;

  // 4. reverse()
  // this can be used to reverse whole string or a part of it
  // this also works same as reverse in vector
  reverse(s.begin(), s.end());
  cout << s << endl;

  // can also reverse a part if you want
  int m, n;
  cin >> m >> n;
  reverse(s.begin() + m, s.begin() + n + 1); // give 1 extra on 2nd parameter
  cout << s << endl;

  return 0;
}
