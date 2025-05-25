#include <iostream>
#include <vector>

using namespace std;

void print_array(const vector<int> &v, int idx) {
  int n = v.size();
  if ( idx == n ) {
    return;
  }
  // the basic thinking processs in this is :
  // if i can get the element just ahead of current so this way i can print the whole array
  cout << v[idx] << " ";
  print_array(v, idx + 1);
}

int maximum_in_arr(const vector<int> &v, int idx) {
  if ( idx == v.size() - 1 ) {
    return v[idx];
  }
  // int max = maximum_in_arr(v, idx + 1);
  // if ( v[idx] > max ) {
  //   return v[idx];
  // }
  // return max;
  // the above commented can be done in a single line using max() function
  return max(v[idx], maximum_in_arr(v, idx + 1));
}

void print_maximum_in_arr(const vector<int> &v, int idx, int max) {
  if ( idx == v.size() ) {
    cout << max << endl;
    return;
  }
  if ( v[idx] > max ) {
    max = v[idx];
  }
  print_maximum_in_arr(v, idx + 1, max);
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
  // print_array(v, 0);
  cout << maximum_in_arr(v, 0) << endl;
  // print_maximum_in_arr(v, 0, v[0]);

  return 0;
}
