#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  void helper(vector<int>& nums, vector<int> ans, vector<vector<int>>& final,
              int idx) {
    if ( idx == nums.size() ) {
      final.push_back(ans);
      return;
    }
    helper(nums, ans, final, idx + 1);
    ans.push_back(nums[idx]);
    helper(nums, ans, final, idx + 1);
  }

  vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> ans;
    vector<vector<int>> final_ans;
    helper(nums, ans, final_ans, 0);
    return final_ans;
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
  vector<vector<int>> res = s.subsets(v);

  for ( int i = 0; i < res.size(); i++ ) {
    for ( int j = 0; j < res[i].size(); j++ ) {
      cout << res[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
