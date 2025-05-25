#include <iostream>
#include <string>

using namespace std;

void bubble_sort_desc(string &v) {
  for ( int i = 0; i < v.size() - 1; i++ ) {
    bool flag = true;
    for ( int j = i + 1; j < v.size(); j++ ) {
      if ( v[i] < v[j] ) {
        swap(v[i], v[j]);
        flag = false;
      }
    }
    if ( flag ) {
      break;
    }
  }
}

string less_than_x(string &s) {
  string res;
  for ( auto x : s ) {
    if ( x >= 'x' ) {
      res.push_back(x);
    }
  }
  bubble_sort_desc(res);
  return res;
}

int main() {
  string s;
  cin >> s;

  string res = less_than_x(s);
  cout << res;

  return 0;
}
