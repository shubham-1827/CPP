#include <iostream>

using namespace std;

class TestClass {
 public:
  int var1;

  TestClass(int var) : var1(var) {}
};

void change_var1_value(TestClass obj1) { obj1.var1 += 10; }

void change_var1_reference(TestClass &obj1) { obj1.var1 += 10; }

int main() {
  TestClass obj(10);

  cout << "value of var before function calls : " << obj.var1 << endl;
  // if it is passed by value then the function receives the copy of the object
  change_var1_value(obj);
  cout << "value of var after change_var1_value : " << obj.var1 << endl;
  // if the object is passed by reference than you can manipulate object from that function
  change_var1_reference(obj);
  cout << "value of var after change_var1_reference : " << obj.var1 << endl;

  return 0;
}
