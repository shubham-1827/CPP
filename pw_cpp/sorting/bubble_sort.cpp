#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

// TC - of bubble sort - O(n^2)
// SC - of bubble sort - O(1) -- as no extra space is created
// the maximum number of passes required to sort the array are n - 1

// if we take the worst case, for ex : 5 4 3 2 1 and size 5
// then the maximum number of swaps required to sort this is - 5 + 4 + 3 + 1 = 10
// so the general formula for it is -> n*(n-1)/2

// this sort the array in descending order, by taking the smallest element to the last
void bubble_sort_desc(vector<int> &v) {
  for ( int i = 0; i < v.size() - 1; i++ ) {
    for ( int j = i + 1; j < v.size(); j++ ) {
      if ( v[i] < v[j] ) {
        swap(v[i], v[j]);
      }
    }
  }
}

// in this the target is to get the smallest element to the front
// the time complexity of this optimized approach with flag variable to check for sorted
// 1. Best case - O(n) - because if the array is already sorted in only in one pass we will be able to check that
// 2. average case - O(n^2)
// 3. worst case - O(n^2)

// bubble sort is an stable sort algorithms
// means in case of repeated elements the order of the repeated elements also remains intact after sorting
// for example : 5 5 1 2 3 -> 5(1) 5(2) 1 2 3
// after sorting will become -> 1 2 3 5(1) 5(2)
void bubble_sort_asc(vector<int> &v) {
  for ( int i = 0; i < v.size() - 1; i++ ) {
    // we are using this flag to check if the array is already sorted or not
    // we are initially assuming the array is sorted
    bool flag = true;
    for ( int j = i + 1; j < v.size(); j++ ) {
      if ( v[i] > v[j] ) {
        swap(v[i], v[j]);
        // if swap happens anywhere in this pass then we make the flag false
        // so the outer will not break, and we will continue
        flag = false;
      }
    }
    // if flag is true here as well after the pass
    // means the array is already sorted so break the loop and dont check furthur
    if ( flag ) {
      break;
    }
  }
}

// this versions target is to get the largest element to the last
void bubble_sort_big_to_last(vector<int> &v) {
  for ( int i = 0; i < v.size() - 1; i++ ) {
    bool flag = true;
    for ( int j = 0; j < v.size() - 1 - i; j++ ) {
      if ( v[j] > v[j + 1] ) {
        swap(v[j], v[j + 1]);
        flag = false;
      }
    }
    if ( flag ) {
      break;
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

  // the time complexity of inbuilt sorting is O(nlog n)
  // sort(v.begin(), v.end());

  bubble_sort_asc(v);
  // bubble_sort_desc(v);
  // bubble_sort_big_to_last(v);

  for ( int i = 0; i < n; i++ ) {
    cout << v[i] << " ";
  }
  cout << endl;

  return 0;
}
