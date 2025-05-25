#include <iostream>
#include <utility>
#include <vector>

using namespace std;

class Solution {
public:
  // dutch flag algorithm (or 3 pointer approach)
  //  the basic idea is to create 3 pointers and just focus on the mid pointer
  //  and swap the needed values
  void sortColors2(vector<int> &nums) {
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    if (nums.size() == 1) {
      return;
    }

    // mid < high is not correct - test case = 2 0 1
    while (mid <= high) {
      // now here goes the three conditions
      // note : dont use if in all the places thinking of doing all the work at
      // one time if your are thinking to do so - remember these test cases -
      // 10, 1100, etc...
      if (nums.at(mid) == 2) {
        swap(nums.at(mid), nums.at(high));
        high--;
      } else if (nums.at(mid) == 0) {
        swap(nums.at(mid), nums.at(low));
        // we are incrementing both because we cant leave mid behind low
        // as the order in array is 0 first, then 1 , then 2s so it means
        // low first , then mid , then high
        low++;
        mid++;
      } else if (nums.at(mid) == 1) {
        mid++;
      }
    }
  }

  // 2 pass counting method
  void sortColors(vector<int> &nums) {
    int c0 = 0;
    int c1 = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
      if (nums.at(i) == 0) {
        c0++;
      }
      if (nums.at(i) == 1) {
        c1++;
      }
    }
    for (int i = 0; i < n; i++) {
      if (c0) {
        nums.at(i) = 0;
        c0--;
      } else if (c1) {
        nums.at(i) = 1;
        c1--;
      } else {
        nums.at(i) = 2;
      }
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
  // s.sortColors(v);
  s.sortColors2(v);

  for (int i = 0; i < n; i++) {
    cout << v.at(i) << " ";
  }
  cout << endl;

  return 0;
}
