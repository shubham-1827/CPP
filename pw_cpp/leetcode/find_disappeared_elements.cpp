#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n = nums.size();
    for ( int i = 0; i < n; ) {
      int correct_idx = nums[i] - 1;
      if ( nums[i] > n or nums[i] == nums[correct_idx] ) {
        i++;
        continue;
      }
      else if ( i != correct_idx ) {
        swap(nums[i], nums[correct_idx]);
      }
      else {
        i++;
      }
    }

    vector<int> res;
    for ( int i = 0; i < n; i++ ) {
      if ( nums[i] - 1 != i ) {
        res.push_back(i + 1);
      }
    }
    return res;
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
  vector<int> res = s.findDisappearedNumbers(v);
  for ( int i = 0; i < res.size(); i++ ) {
    cout << res[i] << " ";
  }
  cout << endl;

  return 0;
}
