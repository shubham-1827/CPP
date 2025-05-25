#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

// the time complexity of selection sort is - O(n^2)
// best case = O(n^2)
// average case = O(n^2)
// worst case = O(n^2)

// the space complexity is O(1) as no new extra variable space is created

//stability of selection sort
// selection sort in an unstable sorting algorithm
// you can druy run the case of  5 5 3 2 1 -> 5(1) 5(2) 3 2 1
// after sorting we will get - 1 2 3 5(2) 5(1) -- thats why it is unstable

// the maximum number of passes required to get the sorted array in selection sort are n - 1
// but the maximum number of swaps are also n - 1 because you are only swapping one time in a pass

// swap the minimum element with the first element of window
// and decrease the size of window by 1 untill the size reaches 1
// means, for first window, search for minimim -> 5 4 3 2 1 (min = 1)
// so now swap, v[first of window] which is 5 and minimum element
// and now decrease the size of window by 1 means new window will be -> 4 3 2 5
// now repeat the same process
void selection_sort(vector<int> &v) {
  for ( int i = 0; i < v.size() - 1; i++ ) {
    int min = i;
    for ( int j = i; j < v.size(); j++ ) {
      if ( v[j] < v[min] ) {
        min = j;
      }
    }
    swap(v[i], v[min]);
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

  selection_sort(v);

  for ( int i = 0; i < n; i++ ) {
    cout << v[i] << " ";
  }
  cout << endl;

  return 0;
}
