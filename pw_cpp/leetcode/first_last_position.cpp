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

vector<int> first_and_last(vector<int> &v, int &target) {
  vector<int> res(2);
  res[0] = first_occurence(v, target);
  res[1] = last_occurence(v, target);
  return res;
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

  vector<int> res = first_and_last(v, target);
  cout << res[0] << " " << res[1] << endl;

  return 0;
}
