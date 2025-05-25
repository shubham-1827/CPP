#include <iostream>
#include <string>

using namespace std;

int main() {

  string s;
  getline(cin, s);

  int count_vowels = 0;
  for (auto x : s) {
    // checking for each x if it is a vowel or not
    if (x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u') {
      count_vowels++;
    }
  }
  cout << count_vowels << endl;

  return 0;
}
