#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    // if you are allowed to create a new 3rd vector then you can iterate over
    // the vectors from 0 to size -1 but, in this case its best to iterate from
    // size-1 to 0
    int i = m - 1;
    int j = n - 1;
    int k = (m + n) - 1;

    while (i >= 0 and j >= 0) {
      if (nums1.at(i) >= nums2.at(j)) {
        nums1.at(k) = nums1.at(i);
        i--;
      } else {
        nums1.at(k) = nums2.at(j);
        j--;
      }
      k--;
    }

    if (j < 0) {
      while (i >= 0) {
        nums1.at(k) = nums1.at(i);
        i--;
        k--;
      }
    } else if (i < 0) {
      while (j >= 0) {
        nums1.at(k) = nums2.at(j);
        j--;
        k--;
      }
    }
  }
};

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> v1(m + n);
  vector<int> v2(n);

  for (int i = 0; i < m; i++) {
    cin >> v1.at(i);
  }
  for (int i = 0; i < n; i++) {
    cin >> v2.at(i);
  }

  Solution s;
  s.merge(v1, m, v2, n);

  for (int i = 0; i < (m + n); i++) {
    cout << v1.at(i) << " ";
  }
  cout << endl;

  return 0;
}
