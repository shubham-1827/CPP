#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

// Time Complexity of insertion sort :
// Best Case : O(n) -> dry run for 1 2 3 4 you will see everytime the inner loop breaks because v[j -1] < v[j]
// average case : O(n^2)
// worst case : O(n^2)

// maximum number of swaps to sort the array are n - 1
// and maximum number of operations performed are n*(n-1)/2

// space Complexity - O(1) - constant extra space

// stability of insertion sort
// the insertion sort is stable sorting algorithm, because there are also adjacent swaps like bubble sort

// this is how insersion sort works
// and if you are a good programmer, toh tum samaj jaoge
// lets take the example :
// we will divide the array into two sections as sorted and unsorted
// and the delimiter between sorted and unsorted is |
// 5 | 4 3 2 1 -> pick 4 which is first element of unsorted part and place that in correct position
// 4 5 | 3 2 1
// 3 4 5 | 2 1
// 2 3 4 5 | 1
// 1 2 3 4 5 | -> here the loop ends, means if there is unsorted part then obviously the array is sorted
//(bonus : How we are placing the elements in correct position, we are just swapping backwards)
void insertion_sort(vector<int> &v) {
  for ( int i = 1; i < v.size(); i++ ) {
    for ( int j = i; j >= 1; j-- ) {
      if ( v[j - 1] > v[j] ) {
        swap(v[j - 1], v[j]);
      }
      else {
        break;
      }
    }
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> v;
  for ( int i = 0; i < n; i++ ) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  insertion_sort(v);

  for ( int i = 0; i < n; i++ ) {
    cout << v[i] << " ";
  }
  cout << endl;

  return 0;
}
