#include <iostream>
#include <vector>

using namespace std;

void wave_form_4(const vector<vector<int>> &v) {
  int n = v.size();

  for (int i = 0; i < n; i++) {
    if (i % 2) {
      for (int j = n - 1; j >= 0; j--) {
        cout << v[j][i] << " ";
      }
    } else {
      for (int j = 0; j < n; j++) {
        cout << v[j][i] << " ";
      }
    }
  }
  cout << endl;
}

void wave_form_3(const vector<vector<int>> &v) {
  int n = v.size();

  if (n % 2) {
    for (int i = n - 1; i >= 0; i--) {
      if (i % 2) {
        for (int j = n - 1; j >= 0; j--) {
          cout << v[i][j] << " ";
        }
      } else {
        for (int j = 0; j < n; j++) {
          cout << v[i][j] << " ";
        }
      }
    }
  } else {
    for (int i = n - 1; i >= 0; i--) {
      if (i % 2) {
        for (int j = 0; j < n; j++) {
          cout << v[i][j] << " ";
        }
      } else {
        for (int j = n - 1; j >= 0; j--) {
          cout << v[i][j] << " ";
        }
      }
    }
  }

  cout << endl;
}

void wave_form_2(const vector<vector<int>> &v) {
  int n = v.size();

  for (int i = 0; i < n; i++) {
    if (i % 2) {
      for (int j = 0; j < n; j++) {
        cout << v[i][j] << " ";
      }
    } else {
      for (int j = n - 1; j >= 0; j--) {
        cout << v[i][j] << " ";
      }
    }
  }
  cout << endl;
}

void wave_form(const vector<vector<int>> &v) {
  int n = v.size();

  for (int i = 0; i < n; i++) {
    if (i % 2) {
      for (int j = n - 1; j >= 0; j--) {
        cout << v[i][j] << " ";
      }
    } else {
      for (int j = 0; j < n; j++) {
        cout << v[i][j] << " ";
      }
    }
  }
  cout << endl;
}

int main() {

  vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  // wave_form(v);
  // wave_form_2(v);
  // wave_form_3(v);
  wave_form_4(v);

  return 0;
}
