#include <climits>
#include <iostream>
using namespace std;

int main() {
  // your code goes here
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

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
  cout << max << " ";
  if (second_max == INT_MIN) {
    cout << "Not Found";
  } else {
    cout << second_max;
  }
  return 0;
}
