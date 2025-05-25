#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void convert_in_range(vector<int> &v) {
  vector<int> copy_v = v;

  sort(copy_v.begin(), copy_v.end());

  int count = 0;
  for ( int i = 0; i < v.size(); i++ ) {
    for ( int j = 0; j < v.size(); j++ ) {
      if ( copy_v[i] == v[j] ) {
        v[j] = count;
      }
    }
    count++;
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> v;
  for ( int i = 0; i < n; i++ ) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  convert_in_range(v);

  for ( int i = 0; i < n; i++ ) {
    cout << v[i] << " ";
  }
  cout << endl;

  return 0;
}
