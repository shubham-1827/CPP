#include <iostream>
#include <utility>
#include <vector>

using namespace std;

// this has the TC of O(n) but only in selected cases
// best use case : 1 to n tak ke integers pe kuch kaam karna ho
void cycle_sort(vector<int> &v) {
  // lets sort the array which contains all the integers from 1 to n but in jumbled order
  // the basic algorithms is to
  for ( int i = 0; i < v.size() - 1; ) {
    int correct_idx = v[i] - 1;
    if ( correct_idx != i ) {
      swap(v[i], v[correct_idx]);
    }
    else {
      i++;
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

  cycle_sort(v);

  for ( int i = 0; i < n; i++ ) {
    cout << v[i] << " ";
  }
  cout << endl;

  return 0;
}
