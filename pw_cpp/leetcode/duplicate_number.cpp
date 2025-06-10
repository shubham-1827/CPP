#include <iostream>
#include <utility>
#include <vector>

using namespace std;

class Solution {
 public:
  int findDuplicate_2(vector<int>& nums) {
    int n = nums.size();
    // this is the classic cycle sort we are just adding the if condition
    for ( int i = 0; i < n; ) {
      int correct_idx = nums[i] - 1;
      // dont write the below condition outside this : check for this 4 2 3 3 1 test case
      if ( i != correct_idx ) {
        // if on the correct index you have the same index then return nums[i]
        // this nums[i] is the dupicate 100%
        if ( nums[i] == nums[correct_idx] ) {
          return nums[i];
        }
        swap(nums[i], nums[correct_idx]);
      }
      else {
        i++;
      }
    }
    return -1;
  }
  // this the solution which usses same way two pointers approach

  // first we need to sort the array thats why the TC is O(n log n)
  int findDuplicate(vector<int>& nums) {
    int n = nums.size();
    // solution with two sliders
    int i = 0;
    int j = 1;
    while ( j < n ) {
      if ( nums[i] == nums[j] ) {
        return nums[i];
      }
      i++;
      j++;
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
  // cout << s.findDuplicate(v) << endl;
  cout << s.findDuplicate_2(v) << endl;

  return 0;

  return 0;
}
