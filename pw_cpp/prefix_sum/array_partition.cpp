#include <iostream>
#include <vector>

using namespace std;

// the approach is :
// first we will make the prefix sum arr
// lets take the example arr - 1 2 3 4 5 6
// then, we will break that prefix sum array like this :
// first iteration : 1 | 3 6 10 15 21
// then we will find the sum of left part which is rightmost of left part (1)
// and for right, the sum will be full sum which is last element (21) - last element of left part(1)
// and, we will continue this till the end,
// like we will have second iteration as 1 3 | 6 10 15 21

// the TC is O(n) and space complexity is O(1) because we dont create a new arr
int partition_equal_sum(vector<int> &v) {
  for ( int i = 1; i < v.size(); i++ ) {
    v[i] = v[i] + v[i - 1];
  }
  for ( int i = 1; i < v.size(); i++ ) {
    // if ( v[i - 1] == (v[v.size() - 1] - v[i - 1]) ) {
    // or,
    if ( 2 * v[i - 1] == v[v.size() - 1] ) {
      return i - 1;
    }
  }
  return -1;
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

  // the returned index means the array can be partitioned after that index
  cout << partition_equal_sum(v) << endl;

  return 0;
}
