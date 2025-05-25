#include <cmath>
#include <iostream>

using namespace std;

class Solution {
 public:
  int mySqrt(int x) {
    if ( x == 1 ) {
      return 1;
    }
    int left = 1;
    int right = x / 2;
    int mid;
    int sqrt = 0;
    while ( left <= right ) {
      mid = left + (right - left) / 2;
      // this is needed because after even reducing the search space form x to x/2 in start
      // still the result of mid * mid is getting out of bounds
      long long int mid_square = (long long)mid * (long long)mid;
      if ( mid_square == x ) {
        return mid;
      }
      if ( mid_square > x ) {
        right = mid - 1;
      }
      else {
        sqrt = mid;
        left = mid + 1;
      }
    }
    // or you can just return right that will also work,
    // just dry run and check that !!!
    // return right;
    return sqrt;
  }

  int mySqrt_2(int x) {
    for ( long long int i = 1; i <= x / 2; i++ ) {
      if ( i * i > x ) {
        return i - 1;
      }
    }
    return -1;
  }
};

int main() {
  int x;
  cin >> x;

  Solution s;
  cout << s.mySqrt(x) << endl;

  return 0;
}
