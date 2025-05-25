#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  // dry runnnnnn, and seeeeeeeee
  int peakIndexInMountainArray(vector<int>& arr) {
    // left is 1 because first element cant be greatest or peak
    int left = 1;
    // same for right, last element cant be peak
    int right = arr.size() - 2;
    int mid;
    while ( left <= right ) {
      mid = left + (right - left) / 2;
      // here we are comparing with mid - 1 you can also compare with mid + 1 and it will also give right ans
      if ( arr[mid] > arr[mid - 1] ) {
        left = mid + 1;
      }
      else if ( arr[mid] < arr[mid - 1] ) {
        right = mid - 1;
      }
    }
    return right;
  }
};

int main() {
  int n;
  cin >> n;
  vector<int> v;
  for ( int i = 0; i < n; i++ ) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  Solution s;

  cout << s.peakIndexInMountainArray(v) << endl;

  return 0;
}
