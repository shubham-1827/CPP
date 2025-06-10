#include <iostream>

using namespace std;

class A {
 public:
  void display() { cout << "From A" << endl; }
};

// class B : public A {};
class B : virtual public A {};

// class C : public A {};
class C : virtual public A {};

class D : public B, public C {};

int main() {
  D d;
  d.B::
      display();  // this says the compiler to choose the path of B and igmore the path of C to reach A

  d.C::display();  // the vice versa of the above

  d.display();  // when we use the virtual keyword when inheriting the class then it makes sure only one copy is passed if there are conflicts
  // like here in D there are 2 A's so virutal A, only allows to pass 1 copy of A to D

  // this is the solution to the famous diamond problem in multiple inheritence

  return 0;
}
