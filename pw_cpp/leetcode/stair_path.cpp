#include <iostream>

using namespace std;

class Solution {
 public:
  // this iterative dp solution, is faster and it is basically calculating fibonnaci number
  int climbStairs_2(int n) {
    if ( n == 1 ) {
      return 1;
    }
    else if ( n == 2 ) {
      return 2;
    }
    int a = 1;
    int b = 2;
    int sum = 0;
    // we are tackling the case of 1 and 2 above so we start from 3
    for ( int i = 3; i <= n; i++ ) {
      sum = a + b;
      a = b;
      b = sum;
    }
    return sum;
  }

  // this recursive solution will give tle on leetcode
  int climbStairs(int n) {
    if ( n == 1 ) {
      return 1;
    }
    else if ( n == 2 ) {
      return 2;
    }
    // no. of ways of climbing 4 staris is always the sum of climbing 3 stairs + climbing 2 stairs
    // we can say that, by looking at the obervation and dry running the code
    return climbStairs(n - 1) + climbStairs(n - 2);
  }
  // just for practice climb stairs - with 3 jumps also possible
  int climbStairs_3jump(int n) {
    if ( n == 1 ) {
      return 1;
    }
    else if ( n == 2 ) {
      return 2;
    }
    else if ( n == 3 ) {
      return 4;
    }
    // no. of ways of climbing 4 staris is always the sum of climbing 3 stairs + climbing 2 stairs
    // we can say that, by looking at the obervation and dry running the code
    return climbStairs_3jump(n - 1) + climbStairs_3jump(n - 2) +
           climbStairs_3jump(n - 3);
  }
};

int main() {
  int n;
  cin >> n;

  Solution s;
  cout << s.climbStairs_2(n) << endl;

  return 0;
}
