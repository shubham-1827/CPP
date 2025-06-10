#include <iostream>
#include <vector>

using namespace std;

// Brute Force Solution - check each element with all its right one and if it is bigger than its 100% a inversion

// this is the O(n^2) time complexity solution with two loops
// which is just ugly and baddddd......
int count_inversions(vector<int> &v) {
  int count = 0;
  for ( int i = 0; i < v.size(); i++ ) {
    for ( int j = i; j < v.size(); j++ ) {
      if ( v[i] > v[j] and i < j ) {
        count++;
      }
    }
  }
  return count;
}

void merge_sorted_array(vector<int> &v1, vector<int> &v2, vector<int> &res) {
  int m = v1.size();
  int n = v2.size();
  int i = 0;
  int j = 0;
  int k = 0;
  while ( i < m or j < n ) {
    if ( i >= m ) {
      res[k++] = v2[j++];
    }
    else if ( j >= n ) {
      res[k++] = v1[i++];
    }
    else if ( v1[i] <= v2[j] ) {
      res[k++] = v1[i++];
    }
    else {
      res[k++] = v2[j++];
    }
  }
}

int count_inversions_2(vector<int> &v, int count) {
  if ( v.size() <= 1 ) {
    return 0;
  }
  vector<int> first_half(v.begin(), v.begin() + v.size() / 2);
  vector<int> second_half(v.begin() + v.size() / 2, v.end());

  int count_1 = count_inversions_2(first_half, count);
  int count_2 = count_inversions_2(second_half, count);
  int final_count = count_1 + count_2;

  // we are counting the inversions after we got the two sorted arrays
  // how we are calculating that :
  // if we get 2 sorted parts like 5 6 7 and 2 3 4
  // then, if 5 is greater than 2 then its 100% that all elements after 5 are also greater than 2
  // so total elements from 5 to end of first_half all add to inversions
  // and, then after adding the inversions to count increase the index of second_half and check for that
  // and if first_half[0] is not greater than second_half[0] then just increment the index of first_half
  // and do the same thing for first_half[1] and repeat
  // try to dry run for 5 1 3 0 4 2 6
  int i = 0;
  int j = 0;
  while ( i < first_half.size() and j < second_half.size() ) {
    if ( first_half[i] > second_half[j] ) {
      final_count += first_half.size() - i;
      j++;
    }
    else {
      i++;
    }
  }

  merge_sorted_array(first_half, second_half, v);
  first_half.clear();
  second_half.clear();

  return final_count;
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for ( int i = 0; i < n; ++i ) {
    cin >> arr[i];
  }

  int inversions = count_inversions_2(arr, 0);
  cout << inversions << endl;

  return 0;
}
