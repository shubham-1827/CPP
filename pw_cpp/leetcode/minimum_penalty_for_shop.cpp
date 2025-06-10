#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
 public:
  // just remember this :
  // the total penalty at the ith hour = no of "Y" after the ith hour + no of "N" before nth hour
  int bestClosingTime(string customers) {
    // 1 for Y and 0 for N - initial assumtion
    vector<int> v(customers.size(), 0);
    for ( int i = 0; i < v.size(); i++ ) {
      if ( customers[i] == 'Y' ) {
        v[i] = 1;
      }
      else {
        v[i] = 0;
      }
    }
    // make the prefix sum array of the inverse values of v
    // this calculates all the no. of "N" before the ith hour
    // means this is the prefix sum for "N"
    vector<int> pre(v.size(), 0);
    for ( int i = 0; i < pre.size(); i++ ) {
      v[i] = (v[i] == 0) ? 1 : 0;
      if ( i == 0 ) {
        pre[i] = v[i];
        continue;
      }
      pre[i] = pre[i - 1] + v[i];
    }

    // calculating the value for nth hour which is pre[pre.size() - 1]
    int nth_hour_penalty = pre[pre.size() - 1];

    // now add the suffix sum to the prefix sum array to make the penalty array
    int current_suff_sum = 0;
    for ( int i = pre.size() - 1; i >= 0; i-- ) {
      v[i] = (v[i] == 0) ? 1 : 0;
      if ( i == 0 ) {
        current_suff_sum = current_suff_sum + v[i];
        pre[i] = current_suff_sum;
        continue;
      }
      else if ( i == pre.size() - 1 ) {
        current_suff_sum = v[i];
        pre[i] = pre[i - 1] + current_suff_sum;
        continue;
      }
      current_suff_sum = current_suff_sum + v[i];
      pre[i] = pre[i - 1] + current_suff_sum;
    }

    // find minimum in the prefix sum array to get the answer
    int min = 0;
    for ( int i = 0; i < pre.size(); i++ ) {
      if ( pre[min] > pre[i] ) {
        min = i;
      }
    }

    if ( pre[min] > nth_hour_penalty ) {
      return pre.size();
    }
    return min;
  }
};

int main() {
  string customer;
  cin >> customer;

  Solution s;
  cout << s.bestClosingTime(customer) << endl;
  // s.bestClosingTime(customer);

  return 0;
}
