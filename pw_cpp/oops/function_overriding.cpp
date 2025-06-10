#include <iostream>

using namespace std;

class Base {
 public:
  void display() { cout << "This is from the Base class!!!" << endl; }
};

class Derived : public Base {
 public:
  // we reimplemented the display function from the base, here in derived even after inheriting from the base
  // thats function overriding, we just overwrote the function from Base class
  // when we create a object of derived class, this function call will happen on runtime,
  // like complier will think "ok, there is a function display in Base, but ohhh there is also a function display in Derived"
  // "so call the display from the Derived class"
  void display() { cout << "This is from the Derived class!!!" << endl; }
};

int main() {
  Base obj;
  obj.display();

  Derived obj1;
  obj1.display();

  return 0;
}
