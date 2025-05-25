#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;

  // Ensure length is greater than 5
  if (s.length() <= 5) {
    cout << "Input string must be longer than 5 characters." << endl;
    return 1;
  }

  int count = 0;
  for (size_t i = 1; i < s.length(); ++i) {
    if (s[i] != s[i - 1]) {
      count++;
    }
  }

  cout << count << endl;
  return 0;
}
