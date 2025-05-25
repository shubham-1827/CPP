#include <iostream>
#include <string>

using namespace std;

int main() {

  int x;
  cin >> x;

  // you can convert any data type in string using to_string() function
  string s = to_string(x);
  cout << s << endl;

  // use case of to_string() function
  // counting digits in a number
  cout << to_string(x).size() << endl;

  // there are also functions that convert string to integer or float or double
  int y = stoi(s);
  cout << y << endl;
  cout << sizeof(y) << endl;

  long long int a = stoll(s);
  cout << a << endl;
  cout << sizeof(a) << endl;

  // similarly for float stof and for double stod

  return 0;
}
