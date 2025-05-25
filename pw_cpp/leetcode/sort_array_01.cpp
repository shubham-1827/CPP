#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

// this is done using two pointer, first pointer check if the number is positive
// or negative and vice versa
void move_negative(vector<int> &v) {
  int n = v.size();
  int l = 0;
  int r = n - 1;

  while (l < r) {
    if (v.at(l) >= 0 and v.at(r) < 0) {
      swap(v.at(l), v.at(r));
      l++;
      r--;
    } else {
      if (v.at(l) < 0) {
        l++;
      }
      if (v.at(r) >= 0) {
        r--;
      }
    }
  }
}

// using 2 pointers
void sort_0_1(vector<int> &v) {
  int n = v.size();
  int l = 0;
  int r = n - 1;

  while (l < r) {
    if (v.at(l) == 1 and v.at(r) == 0) {
      swap(v.at(l), v.at(r));
      l++;
      r--;
    } else {
      if (v.at(l) == 0) {
        l++;
      }
      if (v.at(r) == 1) {
        r--;
      }
    }
  }
}

// using 2 pass method
void sort_array_2pass(vector<int> &v) {
  int count0 = 0;
  int n = v.size();
  for (int i = 0; i < n; i++) {
    if (v.at(i) == 0) {
      count0++;
    }
  }
  // for (int i = 0; i < n; i++) {
  //   if (count0) {
  //     v.at(i) = 0;
  //     count0--;
  //     continue;
  //   }
  //   v.at(i) = 1;
  // }

  // better and faster method with fill
  // fill is little bit faster than manual loop
  fill(v.begin(), v.end() - count0, 0);
  fill(v.begin() + count0, v.end(), 1);
}

int main() {

  int n;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  // sort_0_1(v);
  // sort_array_2pass(v);
  move_negative(v);

  for (int i = 0; i < n; i++) {
    cout << v.at(i) << " ";
  }
  cout << endl;

  return 0;
}
