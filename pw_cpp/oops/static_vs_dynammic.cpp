#include <iostream>

using namespace std;

class TestClass {
 public:
  int var1;

  TestClass(int var) : var1(var) {}
};

int main() {
  // creating the object statically means :
  // 1. memory is allocated at the compile time on the stack managed by main
  // 2. the memory related to object cretion will be handled by main
  // 3. the size of object is determined at compile time so memory for the object will be allocated
  //    before the program runs
  TestClass obj1(10);  // this is a static object

  cout << obj1.var1 << endl;

  // creating the object dynammically means :
  // 1. memory is allocated at the run time not at the compile time
  // 2. the oject is created on the heap
  // 3. the memory is not managed by main, we need to call delete obj to free up the memory on heap to avoid memory leaks

  TestClass *obj2 = new TestClass(20);  // this is a dynammic object

  cout << obj2->var1 << endl;

  // use the obj2 before deleting it
  delete obj2;

  return 0;
}
