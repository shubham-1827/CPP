#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> v;

  for (int i = 0; i < 50; i++) {
    v.push_back(i);
  }

  // once the capacitty is created for the vector it just hold it till the
  // program ends
  cout << v.size() << " " << v.capacity() << endl;

  while (!v.empty()) {
    v.pop_back();
  }

  // so here after the while loop the capacity remains same (64) but the size
  // decreases to 0
  cout << v.size() << " " << v.capacity() << endl;

  return 0;
}
