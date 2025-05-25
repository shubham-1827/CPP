#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

class Solution {
public:
  void reverse(vector<int> &v, int a, int b) {
    while (a < b) {
      swap(v.at(a), v.at(b));
      a++;
      b--;
    }
  }

  void nextPermutation(vector<int> &nums) {
    int n = nums.size();

    // we need to look for the change using this pivot idx,
    // step -1 : find the pairs in which element at i is less than element at i
    // + 1
    int pivot_idx = -1;
    for (int i = n - 2; i >= 0; i--) {
      if (nums.at(i) < nums.at(i + 1)) {
        pivot_idx = i;
        break;
      }
    }

    // this if statement is for the case where there is no larger next
    // permutation so we just give the smallest permutation by reversing whole
    if (pivot_idx == -1) {
      reverse(nums, 0, n - 1);
    } else {
      // step 2 : after finding the pivot, reverse all the part of array ahead
      // of pivot
      reverse(nums, pivot_idx + 1, n - 1);

      // step 3 : now find the just greater number than pivot
      // if you are thinking why we need to find just greater idx then try this
      // test case - 2 3 1 it will give 1 2 3, but the correct is 3 1 2
      int just_greater = -1;
      for (int i = pivot_idx + 1; i < n; i++) {
        if (nums.at(pivot_idx) < nums.at(i)) {
          just_greater = i;
          break;
        }
      }
      // step 4 : now swap the pivot idx with just greater to find the next
      // permutations
      swap(nums.at(pivot_idx), nums.at(just_greater));
    }
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

  Solution s;
  s.nextPermutation(v);

  for (int i = 0; i < n; i++) {
    cout << v.at(i) << " ";
  }
  cout << endl;

  return 0;

  return 0;
}
