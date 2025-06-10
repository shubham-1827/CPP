#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int firstMissingPositive(vector<int>& nums) {
    int n = nums.size();
    for ( int i = 0; i < n; ) {
      if ( nums[i] <= 0 ) {
        i++;
        continue;
      }
      int correct_idx = nums[i] - 1;
      if ( nums[i] > n or nums[i] == nums[correct_idx] ) {
        i++;
      }
      else if ( i != correct_idx ) {
        swap(nums[i], nums[correct_idx]);
      }
      else {
        i++;
      }
    }
    for ( int i = 0; i < n; i++ ) {
      if ( (unsigned int)nums[i] - 1 != i ) {
        return i + 1;
      }
    }
    // if no missing then it means 100% that missing is n + 1
    return n + 1;
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
  cout << s.firstMissingPositive(v) << endl;

  return 0;
}
