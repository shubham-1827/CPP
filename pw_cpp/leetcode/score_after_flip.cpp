#include <asm-generic/errno.h>
#include <iostream>
#include <vector>

using namespace std;
class Solution {

public:
  int matrixScore(vector<vector<int>> &grid) {
    // first loop for the rows
    for (int i = 0; i < grid.size(); i++) {
      // if start of any row is 0 then flip the rows
      if (grid.at(i).at(0) == 0) {
        // if yes then we iterate over and flip the bits
        for (int j = 0; j < grid.at(i).size(); j++) {
          if (grid.at(i).at(j) == 0) {
            grid.at(i).at(j) = 1;
          } else {
            grid.at(i).at(j) = 0;
          }
        }
      }
    }

    // second loop for the columns
    // for columns just check if there is more 0s then 1s then flip the bits
    for (int i = 0; i < grid.at(0).size(); i++) {
      int count0 = 0;
      int count1 = 0;
      // this loop checks for the no. of zeros and ones in a column
      for (int j = 0; j < grid.size(); j++) {
        if (grid.at(j).at(i) == 0) {
          count0++;
        } else {
          count1++;
        }
      }
      // yeh loop dobara chalega, i bar zero one ginne ke liye chala abb finally
      // flip ke liye chalega if zeros > ones
      if (count0 > count1) {
        for (int j = 0; j < grid.size(); j++) {
          if (grid.at(j).at(i) == 0) {
            grid.at(j).at(i) = 1;
          } else {
            grid.at(j).at(i) = 0;
          }
        }
      }
    }

    // now calculating the decimal values for each row and adding them up
    int final_sum = 0;
    for (int i = 0; i < grid.size(); i++) {
      int power_of_2 = 1;
      int row_sum = 0;
      for (int j = grid.at(0).size() - 1; j >= 0; j--) {
        row_sum += power_of_2 * grid.at(i).at(j);
        power_of_2 *= 2;
      }
      final_sum += row_sum;
    }

    return final_sum;
  }
};

int main() {
  int m, n;
  cin >> m >> n;

  vector<vector<int>> v(m);

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      int x;
      cin >> x;
      v.at(i).push_back(x);
    }
  }
  cout << endl;

  Solution s;
  cout << s.matrixScore(v) << endl;

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << v.at(i).at(j) << " ";
    }
    cout << endl;
  }

  return 0;
}
