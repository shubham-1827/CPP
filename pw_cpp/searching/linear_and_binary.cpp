#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// the time complexity is O(n)
// so the search space is linearly dependent thats why its called linear search
int linear_search(vector<int> &v, int target) {
  for ( int i = 0; i < v.size(); i++ ) {
    if ( v[i] == target ) {
      return i;
    }
  }
  return -1;
}

// this will only work if the array is sorted either in ascending or descending order
// time complexity of binary search is O(log n) which is far better than linear search
int binary_search(vector<int> &v, int target) {
  // check if array is sorted and if not then sort it
  if ( !(is_sorted(v.begin(), v.end())) ) {
    sort(v.begin(), v.end());
  }
  int left = 0;
  int right = v.size() - 1;
  int mid;
  while ( left <= right ) {
    // this can give wrong ans if array is so big and high == INT_MAX
    // so left + high will be more than what the int can handle
    // mid = (left + right) / 2;
    // now the below one will work everywhere
    // this is made using (left + left + right - left) / 2
    // then , 2 * left /2 + (right - left) /2
    mid = left + (right - left) / 2;
    if ( target > v[mid] ) {
      left = mid + 1;
    }
    else if ( target < v[mid] ) {
      right = mid - 1;
    }
    else {
      return mid;
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

  int target;
  cin >> target;

  // cout << linear_search(v, target) << endl;
  cout << binary_search(v, target) << endl;

  return 0;
}
