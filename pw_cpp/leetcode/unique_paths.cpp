#include <iostream>

using namespace std;

class Solution {
 public:
  // this solution will give tle on leetcode
  int uniquePaths(int m, int n) {
    // this is the smallest possible grid so it is the base case
    if ( m == 2 and n == 2 ) {
      return 2;
    }
    else if ( m == 1 or n == 1 ) {
      return 1;
    }

    return uniquePaths(m, n - 1) + uniquePaths(m - 1, n);
  }
};

int main() {
  int m, n;
  cin >> m >> n;

  Solution s;
  cout << s.uniquePaths(m, n) << endl;

  return 0;
}
