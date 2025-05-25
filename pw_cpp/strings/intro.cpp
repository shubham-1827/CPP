#include <iostream>
#include <string>

using namespace std;

int main() {

  // before diving into string lets frist see what is char arrays
  char str[5] = {'a', 'b', 'c', 'd',
                 '\0'}; // the last should be null in any intialized char array
  cout << str << endl;  // prints - abcde

  // another way to initialize char str
  char str2[] = "abcdef";
  cout << str2 << endl;

  // there is a null character '\0' at the end of each char array in which
  // size is not given
  //  and this is inserted by the compiler to denote the end of string
  // but this will only happens if you declare char arrays using string literals
  char str1[] = "abcdefghijk";
  for (int i = 0; str1[i] != '\0'; i++) {
    cout << str1[i] << " ";
  }
  cout << endl;

  // now we got a better version of char arrays which are called as string
  // to use strings you need <strng> header to be included

  string s = "My name is shubham";
  cout << s << endl;

  // you can also access indivudual characters in the string usinng indexes
  // like printing all even indexes characters in s
  for (int i = 0; i < s.size(); i += 2) {
    cout << s[i] << " ";
  }
  cout << endl;

  // taking input in strings
  //  1. using cin - you can input only a word
  //  like "shubham" is ok but "shubham is handsome" will only read "shubham"
  //  space character is a delimiter in cin in case of strings
  // string s1;
  // cin >> s1;
  // cout << s1;

  // 2. using getline() function this will also read the spaces
  string s2;
  getline(cin, s2);
  cout << s2;

  return 0;
}
