#include <iostream>
#include <utility>
#include <vector>

using namespace std;

// this function pushes all the zeroes to the end and also maintain the relative order of
// non- zero elements

// this is the application of bubble sort
// in each pass we are taking 1 zero to the end
void push_zeroes(vector<int> &v) {
  for ( int i = 0; i < v.size() - 1; i++ ) {
    bool flag = true;
    for ( int j = 0; j < v.size() - 1 - i; j++ ) {
      if ( v[j] == 0 ) {
        swap(v[j], v[j + 1]);
        flag = false;
      }
    }
    if ( flag ) {
      break;
    }
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> v;
  for ( int i = 0; i < n; i++ ) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  push_zeroes(v);

  for ( int i = 0; i < n; i++ ) {
    cout << v[i] << " ";
  }
  cout << endl;

  return 0;
}
