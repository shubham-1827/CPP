#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  vector<vector<int>> transpose(vector<vector<int>> &matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    vector<vector<int>> transpose(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        transpose[i][j] = matrix[j][i];
      }
    }
    return transpose;
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
  vector<vector<int>> res = s.transpose(v);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << res[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
