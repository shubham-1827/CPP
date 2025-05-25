#include <iostream>
#include <vector>

using namespace std;

int last_occurence(const vector<int> &v, const int &target) {
  int left = 0;
  int right = v.size() - 1;
  int mid;
  while ( left <= right ) {
    mid = left + (right - left) / 2;
    if ( v[mid] == target ) {
      if ( mid != v.size() - 1 and v[mid + 1] == target ) {
        left = mid + 1;
        continue;
      }
      return mid;
    }
    else if ( v[mid] > target ) {
      right = mid - 1;
    }
    else {
      left = mid + 1;
    }
  }
  return -1;
}

int first_occurence(const vector<int> &v, const int &target) {
  int left = 0;
  int right = v.size() - 1;
  int mid;
  while ( left <= right ) {
    mid = left + (right - left) / 2;
    if ( v[mid] == target ) {
      if ( mid != 0 and v[mid - 1] == target ) {
        right = mid - 1;
        continue;
      }
      return mid;
    }
    else if ( v[mid] > target ) {
      right = mid - 1;
    }
    else {
      left = mid + 1;
    }
  }
  return -1;
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

  cout << first_occurence(v, target) << endl;
  // cout << last_occurence(v, target) << endl;

  return 0;
}
