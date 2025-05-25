#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &v, int l, int r) {
  while (l < r) {
    v.at(l) = v.at(l) + v.at(r);
    v.at(r) = v.at(l) - v.at(r);
    v.at(l) = v.at(l) - v.at(r);
    l++;
    r--;
  }
}

int main() {

  int n;
  cin >> n;

  vector<int> v;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  int a, b;
  cin >> a >> b;

  reverse(v, a, b);

  for (int i = 0; i < n; i++) {
    cout << v.at(i) << " ";
  }
  cout << endl;

  return 0;
}
