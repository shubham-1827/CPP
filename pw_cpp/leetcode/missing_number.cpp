#include <iostream>
#include <utility>
#include <vector>

using namespace std;

class Solution {
 public:
  // this is the solution with the use of maths
  int missingNumber_3(vector<int>& nums) {
    int n = nums.size();
    int sum_expected = (n * (n + 1)) / 2;
    int array_sum = 0;
    for ( int i = 0; i < n; i++ ) {
      array_sum += nums[i];
    }
    return (sum_expected - array_sum);
  }
  // this is the solution using cycle sort,
  // the TC is O(n) and the SC is O(1) becuase no new array is created in this
  int missingNumber_2(vector<int>& nums) {
    int n = nums.size();
    for ( int i = 0; i < n; ) {
      if ( nums[i] == n ) {
        i++;
        continue;
      }
      int correct_idx = nums[i];
      if ( i != correct_idx ) {
        swap(nums[i], nums[correct_idx]);
      }
      else {
        i++;
      }
    }
    for ( int i = 0; i < n; i++ ) {
      if ( nums[i] != i ) {
        return i;
      }
    }
    // if no missing then it means 100% that missing is
    return n;
  }
  // this is the solution with check vector with size n + 1 means this has SC of O(n) and TC(n)
  int missingNumber(vector<int>& nums) {
    int n = nums.size();
    vector<bool> is_present(n + 1, false);
    for ( int i = 0; i < n; i++ ) {
      is_present[nums[i]] = true;
    }
    for ( int i = 0; i < n + 1; i++ ) {
      if ( is_present[i] == false ) {
        return i;
      }
    }
    return -1;
  }
};

int main() {
  int n;
  cin >> n;
  vector<int> v;
  for ( int i = 0; i < n; i++ ) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  Solution s;
  // cout << s.missingNumber(v) << endl;
  cout << s.missingNumber_2(v) << endl;

  return 0;
}
