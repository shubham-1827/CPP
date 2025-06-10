#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> pre_product(n, 0);
    pre_product[0] = 1;
    for ( int i = 1; i < n; i++ ) {
      pre_product[i] = nums[i - 1] * pre_product[i - 1];
    }
    // suffix product except self multiplied into preproduct
    int current_suffix_p = 1;
    for ( int i = n - 2; i >= 0; i-- ) {
      current_suffix_p = current_suffix_p * nums[i + 1];
      pre_product[i] *= current_suffix_p;
    }
    return pre_product;
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
  vector<int> res = s.productExceptSelf(v);
  for ( int i = 0; i < res.size(); i++ ) {
    cout << res[i] << " ";
  }
  cout << endl;

  return 0;
}
