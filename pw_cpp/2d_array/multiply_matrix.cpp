#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> multiply_matrix(vector<vector<int>> v1,
                                    vector<vector<int>> v2) {
  int m1 = v1.size();
  int n = v2.size();
  int m2 = v2[0].size();

  vector<vector<int>> res(m1, vector<int>(m2));

  // note : matrix can only be multiplyed if columns of first == rows of second

  // if v1 is of order m1xn and v2 is of order nxm2
  // then the resultant matrix will have final order m1xm2

  // the basic rule is to pick one matrix from 2
  // then traverse over the rows with first loop
  // then traverse over the column non choosen one with the second loop
  // then using the third loop traverse over the correspoinding row or column in
  // v1 and v2

  // res[i][j] = summation(k = 0, k = n-1) v1[i][k] * v2[k][j]
  for (int i = 0; i < m1; i++) {
    for (int j = 0; j < m2; j++) {
      for (int k = 0; k < n; k++) {
        res[i][j] += v1[i][k] * v2[k][j];
      }
    }
  }
  return res;
}

int main() {

  int m1, n, m2;
  cin >> m1 >> n >> m2;

  vector<vector<int>> v1(m1, vector<int>(n));
  vector<vector<int>> v2(n, vector<int>(m2));

  for (int i = 0; i < m1; i++) {
    for (int j = 0; j < n; j++) {
      cin >> v1[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m2; j++) {
      cin >> v2[i][j];
    }
  }

  cout << endl;

  vector<vector<int>> final = multiply_matrix(v1, v2);

  for (int i = 0; i < m1; i++) {
    for (int j = 0; j < m2; j++) {
      cout << final[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
