#include <iostream>
#include <vector>

using namespace std;

// code provided by sir using an array
void subsequences_2(int arr[], int n, int idx, vector<int> ans, int k) {
  if ( idx == n ) {
    if ( ans.size() == k ) {
      for ( int i = 0; i < ans.size(); i++ ) {
        cout << ans[i] << " ";
      }
      cout << endl;
    }
    return;
  }
  if ( ans.size() + (n - idx) < k ) {
    return;
  }
  // first case is we are not accepting the idx
  subsequences_2(arr, n, idx + 1, ans, k);
  // second case is we are accepting the idx
  ans.push_back(arr[idx]);
  subsequences_2(arr, n, idx + 1, ans, k);
}

void subsequences(int n, int k, vector<int> v, int idx) {
  // remember here we are using i == n + 1 because we need that i = n as well
  // but when we use arrays like the above case so, i starts at 0 and goes till n-1
  // and, at i == n we also cover the case of i == n-1 which is already the last element of the array
  if ( idx == n + 1 ) {
    if ( v.size() == k ) {
      for ( int i = 0; i < v.size(); i++ ) {
        cout << v[i] << " ";
      }
      cout << endl;
    }
    return;
  }
  // this is improve the time complexity of the program,
  if ( v.size() + (n - idx + 1) < k ) {
    return;
  }
  // first case is we are not accepting the idx
  subsequences(n, k, v, idx + 1);
  // second case is we are accepting the idx
  v.push_back(idx);
  subsequences(n, k, v, idx + 1);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(int);
  int k = 3;

  vector<int> v;
  // subsequences_2(arr, n, 0, v, k);
  subsequences(n, k, v, 1);

  return 0;
}
