#include <climits>
#include <iostream>
using namespace std;

void array_in(int arr[], int n);
void array_out(int arr[], int n);
int linear_search(int arr[], int n, int x) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      return i;
    }
  }
  return -1;
}

int second_largest(int arr[], int n) {
  int max = INT_MIN;
  int second_max = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  for (int i = 0; i < n; i++) {
    if (second_max < arr[i] and arr[i] != max) {
      second_max = arr[i];
    }
  }
  return second_max;
}

int main() {

  int n;
  cin >> n;

  int arr[n];

  array_in(arr, n);
  cout << second_largest(arr, n) << endl;

  // int x;
  // cin >> x;
  // cout << linear_search(arr, n, x) << endl;

  return 0;
}

void array_in(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
}

void array_out(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
