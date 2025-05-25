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

  int sum = 0;
  for (int (*ptr)[n]; ptr < arr + m; ptr++) {
    for (int *ptr = arr[0]; condition; inc - expression) {
    }
  }
  return 0;
}
