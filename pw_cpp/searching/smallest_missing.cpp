#include <iostream>
#include <vector>

using namespace std;

// we are basically comparing the index with v[index]
// because if nothing is missing from start to mid then
// it is 100% that index == v[index]
// and it is greater then there is something missing in first half
// and it equal then check for missing in 2nd half

//NOTE : this is the solution with search space reduction, TC = O(log n)

int smallest_missing(vector<int> &v) {
  int left = 0;
  int right = v.size() - 1;
  int mid;
  int missing = -1;
  while ( left <= right ) {
    mid = left + (right - left) / 2;

    if ( v[mid] == mid ) {
      left = mid + 1;
    }
    // try to dry run once you will understand
    else {
      missing = mid;
      right = mid - 1;
    }
  }
  return missing;
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

  cout << smallest_missing(v) << endl;

  return 0;
}
