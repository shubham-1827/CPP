#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  void reverse(vector<int> &v, int a, int b) {
    while (a < b) {
      int temp = v.at(a);
      v.at(a) = v.at(b);
      v.at(b) = temp;
      a++;
      b--;
    }
  }
  void rotate(vector<int> &nums, int k) {
    int n = nums.size();
    if (k > n) {
      k = k % n;
    }
    int p = n - k - 1;
    reverse(nums, 0, p);
    reverse(nums, p + 1, n - 1);
    reverse(nums, 0, n - 1);
  }
};

int main() {

  int n;
  cin >> n;
  vector<int> v;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  int k;
  cin >> k;

  Solution s;
  s.rotate(v, k);

  for (int i = 0; i < n; i++) {
    cout << v.at(i) << " ";
  }
  cout << endl;

  return 0;
}
