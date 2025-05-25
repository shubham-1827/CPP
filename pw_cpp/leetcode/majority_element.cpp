#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// the time complexity is O(n*log n) -> because of inbuilt sort function
// and space complexity is O(1) -> constant extra space

class Solution {
 public:
  int majorityElement(vector<int>& nums) {
    int n = nums.size();

    sort(nums.begin(), nums.end());

    return nums[n / 2];
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
  cout << s.majorityElement(v) << endl;

  return 0;
}
