#include <iostream>
#include <vector>

using namespace std;

int upper_bound(vector<int> &v, int target) {
  if ( target >= v.back() ) {
    return 0;
  }
  int left = 0;
  int right = v.size() - 1;
  int mid;
  while ( left <= right ) {
    mid = left + (right - left) / 2;
    if ( v[mid] == target ) {
      return v[mid + 1];
    }
    else if ( v[mid] > target ) {
      right = mid - 1;
    }
    else {
      left = mid + 1;
    }
  }
  return v[left];
}

int lower_bound(vector<int> &v, int target) {
  if ( target <= v[0] ) {
    return 0;
  }
  int left = 0;
  int right = v.size() - 1;
  int mid;
  while ( left <= right ) {
    mid = left + (right - left) / 2;
    if ( v[mid] == target ) {
      if ( v[mid] != v[mid - 1] ) {
        return v[mid - 1];
      }
      else {
        for ( int i = mid - 1; i >= 0; i-- ) {
          if ( v[mid] != v[i] ) {
            return v[i];
          }
        }
      }
    }
    else if ( v[mid] > target ) {
      right = mid - 1;
    }
    else {
      left = mid + 1;
    }
  }
  return v[right];
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

  int target;
  cin >> target;
  // we want to find the lower bound of target
  // means, in arr 1 2 3 5
  // if target is 4 then we return index of 3
  cout << lower_bound(v, target) << endl;
  // cout << upper_bound(v, target) << endl;

  return 0;
}
