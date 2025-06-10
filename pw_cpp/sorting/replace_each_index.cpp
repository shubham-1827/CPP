#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

vector<int> replace_each_index(vector<int> &v) {
  vector<int> range;
  if ( v.empty() )
    return range;  // Handle empty array case

  int max = v[0];
  for ( int i = 0; i < v.size(); i++ ) {
    if ( max < v[i] ) {
      max = v[i];
    }
  }

  // the possible solutions can be from 0 to max in array
  // 0 if the array is already sorted
  // max if the array is sorted in descending order
  for ( int i = 1; i <= max; i++ ) {
    for ( int j = 0; j < v.size() - 1; j++ ) {
      // abs function is used to calculate the absolute value
      if ( abs(v[j] - i) > abs(v[j + 1] - i) ) {
        break;
      }
      else if ( j == v.size() - 2 ) {
        range.push_back(i);
      }
    }
  }
  return range;
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

  vector<int> res = replace_each_index(v);

  for ( int i = 0; i < res.size(); i++ ) {
    cout << res[i] << " ";
  }
  cout << endl;

  return 0;
}
