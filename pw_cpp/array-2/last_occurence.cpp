#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v;

  int n;
  cout << "Enter the number of elements in vector : ";
  cin >> n;

  cout << "Enter the elements of the vector : ";
  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    v.push_back(val);
  }

  int x;
  cout << "Enter the element to find the last occurence of : ";
  cin >> x;

  int index = -1;
  // looping in reverse to get the elemet faster
  for (int i = (n - 1); i >= 0; i--) {
    if (v.at(i) == x) {
      index = i; // jaise hi element mila break the loop and print that index
      break;
    }
  }

  if (index < 0)
    cout << x << " is not in the vector" << endl;
  else
    cout << "the last occurence of x is at index " << index << endl;

  return 0;
}
