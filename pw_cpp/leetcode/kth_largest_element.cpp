#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  // this is not the allowed solution, but it works because it always gaurantees O(n log n) TC
  int findKthLargest_2(vector<int> &nums, int k) {
    sort(nums.begin(), nums.end());
    return nums[nums.size() - k];
  }

  //this will give tle on the very large array lets say size 1 lakh and with repeated elements
  // because in that it will hit O(n^2) time complexity
  int partition(vector<int> &v, int start_idx, int end_idx) {
    // taking first element as pivot
    // int pivot_idx = start_idx;

    // to avoid the worst case TC of O(n^2) in quick sort we use the middle element as pivot
    // this wil help avoid the worst case in most of the cases
    int pivot_idx = (start_idx + end_idx) / 2;
    // here we pick the first element and try to set to its correct position in array
    // we will check how many elements are smaller than that pivot first element
    int count = 0;
    for ( int i = start_idx; i <= end_idx; i++ ) {
      if ( i == pivot_idx ) {
        continue;
      }
      if ( v[i] <= v[pivot_idx] ) {
        count++;
      }
    }
    pivot_idx = count + start_idx;
    swap(v[(start_idx + end_idx) / 2], v[pivot_idx]);

    // now we will arrange the array in a way that all the smaller elements than pivot will be move before
    // pivot and lorger ones after pivot
    int i = start_idx;
    int j = end_idx;

    while ( i < pivot_idx and j > pivot_idx ) {
      if ( v[i] <= v[pivot_idx] ) {
        i++;
      }
      else if ( v[j] > v[pivot_idx] ) {
        j--;
      }
      // swapping only occurs when both values are on the wrong side
      else {
        swap(v[i], v[j]);
        i++;
        j--;
      }
    }

    return pivot_idx;
  }

  int kth_largest_quick_select(vector<int> &v, int k, int start_idx,
                               int end_idx) {
    // this is the check
    if ( k <= 0 or k > v.size() ) {
      return -1;
    }
    int n = v.size();
    int pivot_idx = partition(v, start_idx, end_idx);
    // this is the base case, if k is in the range of 1 to v.size()
    if ( n - k == pivot_idx ) {
      return v[pivot_idx];
    }
    else if ( n - k < pivot_idx ) {
      return kth_largest_quick_select(v, k, start_idx, pivot_idx - 1);
    }
    else {
      return kth_largest_quick_select(v, k, pivot_idx + 1, end_idx);
    }
  }
  int findKthLargest(vector<int> &nums, int k) {
    return kth_largest_quick_select(nums, k, 0, nums.size() - 1);
  }
};

int main() {
  int n;
  cin >> n;

  vector<int> v;

  for ( int i = 0; i < n; i++ ) {
    int x;
    char ch;
    cin >> x >> ch;
    v.push_back(x);
  }

  int k;
  cin >> k;

  Solution s;
  cout << s.findKthLargest(v, k) << endl;

  return 0;
}
