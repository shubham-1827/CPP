#include <csignal>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  // dry run once throughly to fully understand
  // this is a very good case of lower bound use case
  // we are basically saying :
  // the answer should be a window or subarray of size k
  // means for 1 2 3 4 5 and k = 4 and x = 3
  // the ans can be :
  // 1. 1 2 3 4
  // 2. 2 3 4 5

  // now what we are trying to do is to find the most optimal index to start
  // and from that index we will take k elements
  // thats why we are only applying binary search on the index which are from 0 to n-k

  // how we are doing that :
  // we are comparing the start index of first window with the end index of next window
  // so for the above case we are comparing, in first iteration
  // distance of 1 with x and distance of 5 with x
  // if distance of last element of next window is smaller we are moving our focus to that window
  // by moving our left which is gaurding the index
  // and if it is at equal distance or more distance, than that else will hit

  // NOTE if you are wondoring why high = mid and left < right, then dry run for arr = 1, k = 1, and x = 1

  vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int left = 0, right = arr.size() - k;
    while ( left < right ) {
      int mid = (left + right) / 2;
      if ( x - arr[mid] > arr[mid + k] - x )
        left = mid + 1;
      else
        right = mid;
    }
    return vector<int>(arr.begin() + left, arr.begin() + left + k);
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

  int k, x;
  cin >> k >> x;

  Solution s;
  vector<int> res = s.findClosestElements(v, k, x);

  for ( int i = 0; i < res.size(); i++ ) {
    cout << res[i] << " ";
  }
  cout << endl;

  return 0;
}
