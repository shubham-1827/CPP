#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  // this is the optimized prefix sum with TC of O(n) but the space complexity of O(1)
  // as no extra array is created
  vector<int> runningSum_2(vector<int>& nums) {
    for ( int i = 1; i < nums.size(); i++ ) {
      nums[i] = nums[i] + nums[i - 1];
    }
    return nums;
  }
  // this solution has TC of O(n) and space complexity of O(n) as well because we are creating a new array
  vector<int> runningSum(vector<int>& nums) {
    vector<int> pre(nums.size(), 0);
    pre[0] = nums[0];
    for ( int i = 1; i < nums.size(); i++ ) {
      pre[i] = pre[i - 1] + nums[i];
    }
    return pre;
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
  vector<int> prefix = s.runningSum_2(v);
  for ( int i = 0; i < prefix.size(); i++ ) {
    cout << prefix[i] << " ";
  }
  cout << endl;

  return 0;
}
