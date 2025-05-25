#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // leetcode how it works : we start at top right (thats the best position to
  // start) then if target larger than element then go down and if target is
  // smaller then go left and if equal then just return true and it not found
  // then return false out of the loop

  // NOTE : a very important tip, just changing .at().at() with all [][] will
  // significantly boost performance
  //  you will reach from 20% to 93% beat rate on leetcode, just by doing that
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    int down = 0;
    int left = matrix.at(0).size() - 1;

    while (left >= 0 and down < matrix.size()) {
      if (matrix.at(down).at(left) < target) {
        down++;
      } else if (matrix.at(down).at(left) > target) {
        left--;
      } else {
        return true;
      }
    }
    return false;
  }
};

int main() {

  int m, n;
  cin >> m >> n;

  vector<vector<int>> v(m, vector<int>(n));

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> v[i][j];
    }
  }
  cout << endl;

  int target;
  cin >> target;

  Solution s;
  cout << s.searchMatrix(v, target);

  return 0;
}
