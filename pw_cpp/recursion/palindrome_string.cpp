#include <iostream>
#include <string>

using namespace std;

void palindrome_using_loops(string &s) {
  int left = 0;
  int right = s.size() - 1;
  while ( left <= right ) {
    if ( s[left] != s[right] ) {
      cout << "Not a palindrome" << endl;
      return;
    }
    left++;
    right--;
  }
  cout << "string " << s << " is a palindrome" << endl;
  return;
}

void palindrome_using_rec(string &s, int left, int right) {
  if ( left > right ) {
    cout << "string " << s << " is a palindrome" << endl;
    return;
  }
  else if ( s[left] != s[right] ) {
    cout << "Not a palindrome" << endl;
    return;
  }
  palindrome_using_rec(s, left + 1, right - 1);
}

bool palindrome_using_rec_bool(string &s, int left, int right) {
  if ( left > right ) {
    return true;
  }
  else if ( s[left] != s[right] ) {
    cout << "Not a palindrome" << endl;
    return false;
  }
  return palindrome_using_rec_bool(s, left + 1, right - 1);
}

int main() {
  string s;
  cin >> s;

  // palindrome_using_loops(s);
  // palindrome_using_rec(s, 0, s.size() - 1);
  if ( palindrome_using_rec_bool(s, 0, s.size() - 1) ) {
    cout << "true" << endl;
  }
  else {
    cout << "false" << endl;
  }

  return 0;
}
