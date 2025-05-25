#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int trap(vector<int> &height) {
    vector<int> greatest(height.size());
    // set the first and last element of the greatest array as -1
    greatest.at(0) = -1;
    greatest.at(height.size() - 1) = -1;

    // now find the previous max till max idx and next max after max index and
    // fill it in a new vector
    int max = 0;
    for (int i = 1; i < height.size() - 1; i++) {
      greatest.at(i) = height.at(max);
      if (height.at(i) > height.at(max)) {
        max = i;
      }
    }
    max = height.size() - 1;
    for (int i = height.size() - 2; i >= 1; i--) {
      if (height.at(max) < greatest.at(i)) {
        greatest.at(i) = height.at(max);
      } else {
        break;
      }
      if (height.at(i) > height.at(max)) {
        max = i;
      }
    }

    // now if height.at(i) > greatest.at(i) then no water, otherwise water will
    // increase equal to there differences
    int water = 0;
    for (int i = 0; i < height.size(); i++) {
      if (height.at(i) < greatest.at(i)) {
        water += greatest.at(i) - height.at(i);
      }
    }
    return water;
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
  cout << s.trap(v) << endl;

  return 0;
}
