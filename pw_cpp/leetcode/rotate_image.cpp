#include <iostream>
#include <utility>
#include <vector>

using namespace std;

class Solution {
public:
  void transform(vector<vector<int>> &v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        swap(v[i][j], v[j][i]);
      }
    }
  }

  void rotate(vector<vector<int>> &matrix) {
    int n = matrix.size();
    transform(matrix);
    for (int i = 0; i < n; i++) {
      int l = 0;
      int r = n - 1;
      while (l < r) {
        swap(matrix[i][l], matrix[i][r]);
        l++;
        r--;
      }
    }
  }
};

int main() {

  vector<vector<int>> v = {
      {5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};

  Solution s;
  s.rotate(v);

  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v.size(); j++) {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
