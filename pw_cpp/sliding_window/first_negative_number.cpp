#include <iostream>
#include <vector>

using namespace std;

vector<int> first_negative_sw(vector<int> &v, int k) {
  int low = 1;
  int high = k;
  int sum_with_neg = 0;
  int sum_without_neg = 0;
  for ( int i = 0; i < k; i++ ) {
    if ( v[i] < 0 ) {
      sum_with_neg += v[i];
      continue;
    }
    sum_with_neg += v[i];
    sum_without_neg += v[i];
  }
  while ( high < v.size() ) {
    if ( v[high] < 0 and v[low - 1] < 0 ) {
      sum_with_neg = sum_with_neg + v[high] - v[low - 1];
    }
    if ( v[high] < 0 ) {
      sum_with_neg += v[high];
    }
    if ( v[low - 1] < 0 ) {
      sum_with_neg -= v[low - 1];
    }
  }
}
// brute force approach - TC is O(n * k)
vector<int> first_negative(vector<int> &v, int k) {
  vector<int> ans;
  // in an array there are n-k+1 subarrays of size k
  for ( int i = 0; i < v.size() - k + 1; i++ ) {
    for ( int j = i; j < i + k; j++ ) {
      if ( v[j] < 0 ) {
        ans.push_back(v[j]);
        break;
      }
    }
  }
  return ans;
}

int main() {
  // int n;
  // cin >> n;
  vector<int> v = {2, -3, 4, 4, -7, -1, 4, -2, 6};
  // for ( int i = 0; i < n; i++ ) {
  //   int x;
  //   cin >> x;
  //   v.push_back(x);
  // }

  int k = 3;
  // cin >> k;

  vector<int> ans = first_negative(v, k);
  cout << ans.size() << endl;
  for ( auto x : ans ) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}
