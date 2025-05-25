#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> res;

    int minr = 0;
    int maxr = n - 1;
    int minc = 0;
    int maxc = m - 1;

    while ((minr <= maxr) and (minc <= maxc)) {
      // right
      for (int i = minc; i <= maxc; i++) {
        res.push_back(matrix[minr][i]);
      }
      minr++;
      // this is the condition to avoid cases like these :
      // 1 2 3 4
      // 5 6 7 8
      // 9 10 11 12
      // this case will print an extra 6 in the end (dry run and check)
      if (minr > maxr or minc > maxc) {
        break;
      }

      // down
      for (int i = minr; i <= maxr; i++) {
        res.push_back(matrix[i][maxc]);
      }
      maxc--;
      if (minr > maxr or minc > maxc) {
        break;
      }

      // left
      for (int i = maxc; i >= minc; i--) {
        res.push_back(matrix[maxr][i]);
      }
      maxr--;
      if (minr > maxr or minc > maxc) {
        break;
      }
      // up
      for (int i = maxr; i >= minr; i--) {
        res.push_back(matrix[i][minc]);
      }
      minc++;
      if (minr > maxr or minc > maxc) {
        break;
      }
    }

    return res;
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

  Solution s;

  vector<int> res = s.spiralOrder(v);

  for (int i = 0; i < res.size(); i++) {
    cout << res.at(i) << " ";
  }
  cout << endl;

  return 0;
}
