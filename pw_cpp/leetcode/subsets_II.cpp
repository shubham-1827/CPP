#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  void helper(vector<int>& nums, vector<int> ans,
              vector<vector<int>>& final_ans, int idx, bool check) {
    if ( idx == nums.size() ) {
      final_ans.push_back(ans);
      return;
    }
    int first_character = nums[idx];
    int ahead_character;
    if ( idx < nums.size() - 1 ) {
      ahead_character = nums[idx + 1];
    }
    if ( idx < nums.size() - 1 and first_character == ahead_character ) {
      if ( check ) {
        helper(nums, ans, final_ans, idx + 1, false);
      }
      ans.push_back(first_character);
      helper(nums, ans, final_ans, idx + 1, true);
    }
    else {
      if ( check ) {
        helper(nums, ans, final_ans, idx + 1, true);
      }
      ans.push_back(first_character);
      helper(nums, ans, final_ans, idx + 1, true);
    }
  }
  vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    // sorting the nums
    sort(nums.begin(), nums.end());
    vector<int> ans;
    vector<vector<int>> final_ans;
    helper(nums, ans, final_ans, 0, true);
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

  vector<vector<int>> final = s.subsetsWithDup(v);
  for ( int i = 0; i < final.size(); i++ ) {
    for ( int j = 0; j < final[i].size(); j++ ) {
      cout << final[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
