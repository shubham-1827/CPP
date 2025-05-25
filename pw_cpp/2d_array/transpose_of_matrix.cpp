#include <iostream>

using namespace std;

int main() {

  int m, n;
  cin >> m >> n;

  int arr[m][n];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  cout << endl;
  int arr_transpose[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      arr_transpose[i][j] = arr[j][i];
      cout << arr_transpose[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
