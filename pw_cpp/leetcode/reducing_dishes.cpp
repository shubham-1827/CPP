#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int maxSatisfaction(vector<int>& satisfaction) {
    // sorting to bring all the negatives to the left and positives to right
    sort(satisfaction.begin(), satisfaction.end());
    if ( satisfaction[satisfaction.size() - 1] < 0 ) {
      return 0;
    }
    // now we are creating, suffix sum array because the question said we need
    // to maxize the sum of lt_coeff
    // means if we have a input of -8 -9 0 5 -1 so after sorting we get, -9 -8 -1 0 5
    // now we create the suffix sum arr -> -13 -4 4 5 5
    // now we add all the positive values of the suffix sum arr -> 4 + 5 + 5
    // which is, equal to, (-1 + 0 + 5) + (0 + 5) + (5) -> (-1 * 1) + (2 * 0) + (3 * 5) = 14
    // now match this with the first test case of the problem, everything will get 100% cleared

    // creating the suffix sum array
    for ( int i = satisfaction.size() - 2; i >= 0; i-- ) {
      int current_suffix_sum = satisfaction[i] + satisfaction[i + 1];
      satisfaction[i] = current_suffix_sum;
    }
    int lt_coeff = 0;
    for ( int i = satisfaction.size() - 1; i >= 0; i-- ) {
      if ( satisfaction[i] > 0 ) {
        lt_coeff += satisfaction[i];
      }
    }
    return lt_coeff;
  }
};

int main() {
  int n;
  cin >> n;
  vector<int> satisfaction;
  for ( int i = 0; i < n; i++ ) {
    int x;
    cin >> x;
    satisfaction.push_back(x);
  }

  Solution s;
  cout << s.maxSatisfaction(satisfaction) << endl;

  return 0;
}
