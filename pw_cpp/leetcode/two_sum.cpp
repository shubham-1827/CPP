#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> doublet;
    for (int i = 0; i < nums.size() - 1; i++) {
      for (int j = i + 1; j < nums.size(); j++) {
        int a = nums.at(i);
        int b = nums.at(j);
        if (a + b == target) {
          doublet.push_back(i);
          doublet.push_back(j);
          return doublet;
        }
      }
    }
    return doublet;
  }
};

int main() {

  int n;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  int target;
  cin >> target;

  Solution s;
  vector<int> ans = s.twoSum(v, target);
  cout << ans.at(0) << " " << ans.at(1) << endl;

  return 0;
}
