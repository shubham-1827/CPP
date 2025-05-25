#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  // logic :
  // we will select a element from the array lets say 2 3 6 7 so we select 2 and push it to res
  // then, we will call the function, while decreasing the target with the selected element
  // and, passing the idx as i so that we dont call the function for the once selected elements
  // this avoids repetition of cases , like in above test case :
  // if target is 7: then 2 2 3, and 2 3 2 and 3 2 2 are same not different here

  void helper(vector<int>& candidates, int target, vector<int> res,
              vector<vector<int>>& final, int idx) {
    if ( target == 0 ) {
      final.push_back(res);
      return;
    }
    else if ( target < 0 ) {
      return;
    }
    for ( int i = idx; i < candidates.size(); i++ ) {
      res.push_back(candidates[i]);
      helper(candidates, target - candidates[i], res, final, i);
      res.pop_back();
    }
  }

  vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<int> res;
    vector<vector<int>> final;
    helper(candidates, target, res, final, 0);
    return final;
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

  int target;
  cin >> target;

  Solution s;
  vector<vector<int>> final = s.combinationSum(v, target);

  for ( int i = 0; i < final.size(); i++ ) {
    for ( int j = 0; j < final[i].size(); j++ ) {
      cout << final[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
