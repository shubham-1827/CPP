#include <iostream>
#include <vector>

using namespace std;

// the time complexity of making this prefix sum array is O(n)
vector<int> prefix_sum_arr(vector<int> &v) {
  vector<int> pre(v.size(), 0);
  pre[0] = v[0];
  for ( int i = 1; i < v.size(); i++ ) {
    pre[i] = pre[i - 1] + v[i];
  }
  return pre;
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

  vector<int> prefix = prefix_sum_arr(v);
  for ( int i = 0; i < prefix.size(); i++ ) {
    cout << prefix[i] << " ";
  }
  cout << endl;

  return 0;
}
