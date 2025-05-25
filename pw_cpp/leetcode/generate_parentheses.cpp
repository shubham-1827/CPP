#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
 public:
  // this is the classic recursion question
  // and i am so proud to solve this on my own
  // the logic is :
  // we take 2 variables, left for ( and right for )
  // if n = 3 lets say, then ( are 3 and ) are also 3 in the final ans
  // so thats our base case, means if left == n and right == n
  // now we only want to call, for ( if left is less than n
  // and for the ), we cant append this in the start that why, we use left != 0 means it ensures that there is always atleast 1 ( in res
  // and only run for ) if left > right because to avoid these kind of cases ()) this is bad

  // most critical observation :
  // number of closing brackets cant be more than number of opening brackets at any point
  void helper(int &n, string res, vector<string> &final, int left, int right) {
    if ( left == n and right == n ) {
      final.push_back(res);
      return;
    }

    if ( left < n ) {
      helper(n, res + "(", final, left + 1, right);
    }
    if ( left != 0 and left > right ) {
      helper(n, res + ")", final, left, right + 1);
    }
  }
  vector<string> generateParenthesis(int n) {
    vector<string> final;
    string res;
    helper(n, res, final, 0, 0);
    return final;
  }
};

int main() {
  int n;
  cin >> n;

  Solution s;
  vector<string> final = s.generateParenthesis(n);
  for ( int i = 0; i < final.size(); i++ ) {
    cout << final[i] << " ";
  }
  cout << endl;

  return 0;
}
