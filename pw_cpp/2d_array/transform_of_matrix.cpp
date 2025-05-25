#include <iostream>
#include <utility>
#include <vector>

using namespace std;

// try to focus on upper triangle of the (0,0) - (n-1, n-1) diagonal
// and flip these values with the lower triangle of the same diagonal
void transform(vector<vector<int>> &v) {
  int n = v.size();
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      swap(v[i][j], v[j][i]);
    }
  }
}

int main() {

  int n;
  cin >> n;

  vector<vector<int>> v(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> v[i][j];
    }
  }
  cout << endl;

  transform(v);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
