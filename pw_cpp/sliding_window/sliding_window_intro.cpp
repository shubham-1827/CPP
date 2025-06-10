#include <climits>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

pair<vector<int>, int> maximum_sum_subarray_sw(vector<int> &v, int k) {
  int n = v.size();
  int low = 1;
  int high = k;
  //finding the first window sum
  int window_sum = 0;
  for ( int i = 0; i < k; i++ ) {
    window_sum += v[i];
  }

  // calculating rest of the window's sum using the formula :
  // current_window_sum = previous_window_sum + last element of current window - first element of previous window
  // means :  lets take the example : 7 1 2 5 8, and lets take the window size as k = 4
  // so the two possible windows are 7 1 2 5 and 1 2 5 8
  // so as you can see 1 2 5 is common in both the windows and also,
  // if we subtract 7 from first window and add 8 to it in the end we get the second window

  // the TC of this which is called sliding window is O(n) -> much better than the below one which is O(k*n)
  int max_sum = window_sum;
  vector<int> maximum_subarray = vector<int>(v.begin(), v.begin() + k);
  while ( high < n ) {
    window_sum = window_sum + v[high] - v[low - 1];
    if ( window_sum > max_sum ) {
      max_sum = window_sum;
      maximum_subarray = vector<int>(v.begin() + low, v.begin() + high + 1);
    }
    high++;
    low++;
  }
  return make_pair(maximum_subarray, max_sum);
}
vector<int> maximum_sum_subarray(vector<int> &v, int k) {
  int n = v.size();
  int low = 0;
  int high = k - 1;
  int sum = INT_MIN;
  vector<int> maximum_subarray(k);
  // total no, of ops = k*(n - k + 1)
  // so the TC for this is O(k * n)
  while ( high < n ) {  // total no. of ops for outer loop - n - k + 1
    int tmp_sum = 0;
    for ( int i = low; i <= high; i++ ) {  // for this inner loop - k
      tmp_sum += v[i];
    }
    if ( tmp_sum > sum ) {
      sum = tmp_sum;
      maximum_subarray = vector<int>(v.begin() + low, v.begin() + high + 1);
    }
    low++;
    high++;
  }
  return maximum_subarray;
}

int main() {
  int n;
  cin >> n;

  // kab kab sliding window lagane ka soch saket hain :
  // 1. subarray related question
  // 2. substrings wale questions main
  // 3. if question states something like largest or smallest sum
  // 4. if question states "In a window/subarray of given size k"
  // (upar sabhi cases main you can either think of applying sliding window or prefix sum or
  // in some cases, both of them)

  vector<int> v;

  for ( int i = 0; i < n; i++ ) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  int k;
  cin >> k;

  pair<vector<int>, int> result = maximum_sum_subarray_sw(v, k);
  vector<int> res = result.first;
  int max_sum = result.second;
  for ( int i = 0; i < res.size(); i++ ) {
    cout << res[i] << " ";
  }
  cout << endl;
  cout << max_sum << endl;

  return 0;
}
