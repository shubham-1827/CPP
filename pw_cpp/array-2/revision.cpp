#include <iostream>
#include <vector>

using namespace std;

int main() {

  int n;
  cin >> n;
  vector<int> v;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  int key;
  cin >> key;

  // two sum
  for (int i = 0; i < v.size() - 1; i++) {
    for (int j = i + 1; j < v.size(); j++) {
      int a = v.at(i);
      int b = v.at(j);
      if (a + b == key) {
        cout << "(" << i << ", " << j << ")" << endl;
      }
    }
  }

  return 0;
}
