#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  vector<vector<int>> generate(int numRows) {
    vector<vector<int>> res(numRows);

    for (int i = 0; i < numRows; i++) {
      int i_c_0 = 1;
      for (int j = 0; j <= i; j++) {
        res.at(i).push_back(i_c_0);
        // remember here, *= and x = x * ... behaves differently so be causious
        // this is the real case of operator precedence.
        i_c_0 = i_c_0 * (i - j) / (j + 1);
      }
      cout << endl;
    }
    return res;
  }
  // another way,
  // we are just doing 2 steps here :
  // 1. placing 1 at j = 0 and j = i (means last of each row)
  // 2. then applying what pascals triangle really is : v[i][j] = v[i-1][j] +
  // v[i-1][j-1]; vector<vector<int>> generate(int numRows) {
  //   vector<vector<int>> res(numRows);

  //   for (int i = 0; i < res.size(); i++) {
  //     for (int j = 0; j <= i; j++) {
  //       if (j == 0 or j == i) {
  //         res.at(i).push_back(1);
  //       } else {
  //         res.at(i).push_back(res.at(i - 1).at(j) + res.at(i - 1).at(j - 1));
  //       }
  //     }
  //   }
  //   return res;
  // }
};

int main() {

  int n;
  cin >> n;

  Solution s;

  vector<vector<int>> res = s.generate(n);

  for (int i = 0; i < res.size(); i++) {
    for (int j = 0; j < res.at(i).size(); j++) {
      cout << res.at(i).at(j) << " ";
    }
    cout << endl;
  }

  return 0;
}
