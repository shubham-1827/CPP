#include <iostream>

using namespace std;

// abstract classes are like blueprints that other classes use to build themselves
// abstract classes itself cant be instantiated directly, means they cant make objects directly
// they are just the building blocks of other classes
// How to create a abstract class ? -> just add one or more pure virtual functions to make a class abstract
class A {
 public:
  virtual void func1() = 0;
  virtual void func2() = 0;
};

class B : public A {
  // now B never implemented the pure virtuals in A where A is the abstract class
};  // so now B is also still a abstract class

class C : public A {
  // one function 'func1' reimplemented in C
 public:
  void func1() { cout << "This is from class C" << endl; }

  // but still func2 is not reimplemented
};  // so C is also still an abstract class, and it is mostly called as Intermideate Abstract Class

class D : public C {
  // now we implemented the func2 as well in D, and we inherited the implementation of func1 from class C
  // so now D is not an abstract class, but a Concrete class from which objects can be made
 public:
  void func2() { cout << "This is from class D" << endl; }
};

int main() {
  // all the below 3 will give error if you try to do that
  // A a;
  // B b;
  // C c;

  D d;
  d.func1();
  d.func2();

  return 0;
}
