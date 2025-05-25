#include <iostream>

using namespace std;

int main() {

  int n;
  cin >> n;

  void *p = &n;

  // you can only dereference the void pointer if you cast it to the desired
  // type (here int*)
  int *ptr = (int *)p;

  cout << *ptr << endl;
  return 0;
}
