#include <iostream>
#include <vector>

using namespace std;

// time complexity of merge sort is O(nlogn) which is fas better than bubble or selection or insertion sort O(n^2)
void merge_sorted_arr(vector<int> &v1, vector<int> &v2, vector<int> &res) {
  int m = v1.size();
  int n = v2.size();
  int i = 0, j = 0, k = 0;
  while ( i < m or j < n ) {
    if ( i >= m ) {
      res[k++] = v2[j++];
    }
    else if ( j >= n ) {
      res[k++] = v1[i++];
    }
    // this will sort the array in decreasing order instead of increasing
    // else if ( v1[i] >= v2[j] ) {
    else if ( v1[i] <= v2[j] ) {
      res[k++] = v1[i++];
    }
    else {
      res[k++] = v2[j++];
    }
  }
}

void merge_sort(vector<int> &v) {
  // we will be solving this using divide and conquer
  if ( v.size() <= 1 ) {
    return;
  }
  vector<int> first_half(v.begin(), v.begin() + v.size() / 2);
  merge_sort(first_half);
  vector<int> second_half(v.begin() + v.size() / 2, v.end());
  merge_sort(second_half);
  merge_sorted_arr(first_half, second_half, v);

  // this will make the space complexity of merge sort as O(n)
  first_half.clear();
  second_half.clear();
}

int main() {
  int n;
  cin >> n;
  vector<int> v1;
  for ( int i = 0; i < n; i++ ) {
    int x;
    cin >> x;
    v1.push_back(x);
  }

  merge_sort(v1);

  for ( int i = 0; i < n; i++ ) {
    cout << v1[i] << " ";
  }
  cout << endl;

  return 0;
}
