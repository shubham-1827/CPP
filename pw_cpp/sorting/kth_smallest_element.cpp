#include <climits>
#include <iostream>
#include <utility>
#include <vector>

#include "quick_sort.cpp"

using namespace std;

// if you do this with merge sort then the time complexity will always be O(n log n)
// this is the selection sort approach - and the TC is O(k * n)
int kth_smallest_selection(vector<int> &v, int k) {
  int count = 0;
  int min = 0;
  for ( int i = 0; i < v.size(); i++ ) {
    for ( int j = i; j < v.size(); j++ ) {
      if ( v[min] > v[j] ) {
        min = j;
      }
    }
    count++;
    if ( count == k ) {
      break;
    }
    swap(v[i], v[min]);
  }
  return v[min];
}

// the best method is to use quick sort modified which is called quick select algorithm
// by using that the average case TC will be O(n) but the worst case will be O(n^2)
// so we should avoid this using proper randomization
int kth_smallest_quick_select(vector<int> &v, int k, int start_idx,
                              int end_idx) {
  // this is the check
  if ( k <= 0 or k > v.size() ) {
    return -1;
  }
  int pivot_idx = partition(v, start_idx, end_idx);
  // this is the base case, if k is in the range of 1 to v.size()
  if ( k - 1 == pivot_idx ) {
    return v[pivot_idx];
  }
  else if ( k - 1 < pivot_idx ) {
    return kth_smallest_quick_select(v, k, start_idx, pivot_idx - 1);
  }
  else {
    return kth_smallest_quick_select(v, k, pivot_idx + 1, end_idx);
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

  int k;
  cin >> k;

  // cout << kth_smallest_selection(v, k) << endl;
  cout << kth_smallest_quick_select(v, k, 0, n - 1) << endl;

  return 0;
}
