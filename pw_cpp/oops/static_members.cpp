#include <iostream>

using namespace std;

class TestClass {
 private:
  // the static varaibles and methods are linked to class but not the objects, so they can only be accesed using the class name
  // and not through the object
  // for ex :
  // this static variable is used to count how may objects are created from the class
  static int count;
  int var1;

 public:
  TestClass(int var) : var1(var) {
    // whenever the object is created we increase the count
    count++;
  }

  // the static methods can only access the static members of the class
  static int get_count() { return count; }
};

// static variables are initialized outside the class
// thats how c++ works
int TestClass::count = 0;

class TestClass1 {
 private:
  // from cpp17 onwards we can also initialize the static variables directly inside class using inline
  inline static int count = 0;
  int var1;

 public:
  TestClass1(int var) : var1(var) {
    // whenever the object is created we increase the count
    count++;
  }

  // the static methods can only access the static members of the class
  static int get_count() { return count; }
};

int main() {
  TestClass a(10);
  TestClass b(20);
  TestClass c(30);
  // this will return 3
  cout << "The total no. of object created : " << TestClass::get_count()
       << endl;

  TestClass1 a1(10);
  TestClass1 b1(20);
  TestClass1 c1(30);
  // this will return 3
  cout << "The total no. of object created for TestClass1 : "
       << TestClass1::get_count() << endl;

  return 0;
}
