#include <utility>
#include <vector>

using namespace std;

int partition(vector<int> &v, int start_idx, int end_idx) {
  // taking first element as pivot
  // int pivot_idx = start_idx;

  // to avoid the worst case TC of O(n^2) in quick sort we use the middle element as pivot
  // this wil help avoid the worst case in most of the cases
  int pivot_idx = (start_idx + end_idx) / 2;
  // here we pick the first element and try to set to its correct position in array
  // we will check how many elements are smaller than that pivot first element
  int count = 0;
  for ( int i = start_idx + 1; i <= end_idx; i++ ) {
    if ( v[i] <= v[pivot_idx] ) {
      count++;
    }
  }
  pivot_idx = count + start_idx;
  swap(v[start_idx], v[pivot_idx]);

  // now we will arrange the array in a way that all the smaller elements than pivot will be move before
  // pivot and lorger ones after pivot
  int i = start_idx;
  int j = end_idx;

  while ( i < pivot_idx and j > pivot_idx ) {
    if ( v[i] <= v[pivot_idx] ) {
      i++;
    }
    else if ( v[j] > v[pivot_idx] ) {
      j--;
    }
    // swapping only occurs when both values are on the wrong side
    else {
      swap(v[i], v[j]);
      i++;
      j--;
    }
  }

  return pivot_idx;
}
void quick_sort(vector<int> &v, int start_idx, int end_idx) {
  // this is the base case,
  // NOTE this is not the base case v.size() == 1 because v is not shrinking here just the distance between
  // start_idx and end_idx is decreasing so we will take the base with start_idx and end_idx
  if ( start_idx >= end_idx ) {
    return;
  }
  int pivot_idx = partition(v, start_idx, end_idx);

  // now after running the partition we got the pivot element set in its correct positon and all the elements arranged in
  // sunch a way that all the smaller are at the left of pivot and largers on the right of pivot
  // now we just call the quick sort function on the subarray left of pivot to get it sorted recursively
  // and same thing for the right side of the pivot
  quick_sort(v, start_idx, pivot_idx - 1);
  quick_sort(v, pivot_idx + 1, end_idx);
}

// int main() {
//   int n;
//   cin >> n;
//   vector<int> v;
//   for ( int i = 0; i < n; i++ ) {
//     int x;
//     cin >> x;
//     v.push_back(x);
//   }
//   quick_sort(v, 0, n - 1);
//   for ( int i = 0; i < n; i++ ) {
//     cout << v[i] << " ";
//   }
//   cout << endl;

//   return 0;
// }
