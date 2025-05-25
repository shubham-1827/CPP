#include <iostream>
#include <string>
#include <vector>

using namespace std;

int max_in_string_vector(vector<string> &v) {
  int max_idx = 0;
  for (int i = 0; i < v.size(); i++) {
    if (stoi(v[max_idx]) < stoi(v[i])) {
      max_idx = i;
    }
  }
  return max_idx;
}

int main() {

  vector<string> v;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    v.push_back(s);
  }

  int res = max_in_string_vector(v);
  cout << v[res] << " " << res << endl;

  return 0;
}
