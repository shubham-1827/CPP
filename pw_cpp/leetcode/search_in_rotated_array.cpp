#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  // this is how the logic works :
  // we got an array, as ex - 6 8 20 28 33 1 3 4
  // so the array is sorted from 6 to 33 and also from 1 to 4
  // so if we can just find the pivot element that is smaller than pervious and also
  // smaller than forward then using that element  we can apply binary search on
  // now created 2 sections of the array
  // so for the above example :
  // the array will be sepereated into : 6 8 20 28 33 and 1 3 4 (1 is the pivot element)
  int search(vector<int>& nums, int target) {
    // n == 1 and 2 cases are handled sepereatly, bcz they sucks ....
    if ( nums.size() == 1 ) {
      if ( nums[0] == target ) {
        return 0;
      }
      return -1;
    }
    else if ( nums.size() == 2 ) {
      if ( nums[0] == target ) {
        return 0;
      }
      else if ( nums[1] == target ) {
        return 1;
      }
      else
        return -1;
    }
    // here left will start from 1 because pivot can never be first element
    // as 1 <= k < nums.length() means arrays cant be fully rotated or fully sorted
    int left = 1;
    int right = nums.size() - 1;
    int mid;
    int pivot;
    while ( left <= right ) {
      mid = left + (right - left) / 2;
      if ( nums[mid] < nums[mid - 1] ) {
        pivot = mid;
        break;
      }
      else if ( nums[mid] > nums[right] ) {
        left = mid + 1;
      }
      else {
        right = mid - 1;
      }
    }
    // resetting left and right for furthur use
    left = 0;
    right = nums.size() - 1;

    // after calculating the pivot we will determine on which section of array
    // we need to search on to get the target
    int new_left;
    int new_right;

    if ( nums[pivot] <= target and nums[right] >= target ) {
      //if this hits, we will search on the second part after pivot - means in 1 3 4
      new_left = pivot;
      new_right = right;
    }
    else {
      // if this else hits, we will search on the part before pivot - means in 6 8 20 28 33
      new_left = left;
      new_right = pivot - 1;
    }
    while ( new_left <= new_right ) {
      // reusing the mid
      mid = new_left + (new_right - new_left) / 2;
      if ( nums[mid] == target ) {
        return mid;
      }
      else if ( nums[mid] < target ) {
        new_left = mid + 1;
      }
      else {
        new_right = mid - 1;
      }
    }
    // agar kuch bhi nahi mila to return -1 kardo
    return -1;
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

  int target;
  cin >> target;

  Solution s;
  cout << s.search(v, target) << endl;

  return 0;
}
