#include <iostream>
#include <vector>
#define PI 3.1415

using namespace std;

class Base {
 public:
  void display() { cout << "This display is from Base class" << endl; }
};

class Derived : public Base {
 public:
  void display() { cout << "This display is from Derived class" << endl; }
};

class Base1 {
 public:
  virtual void display() { cout << "This display is from Base1 class" << endl; }
};

class Derived1 : public Base1 {
 public:
  void display() { cout << "This display is from Derived1 class" << endl; }
};

// Use case of Base *obj = new Derived();
class Shape {
 public:
  virtual float calculate_area(float s) {
    cout << "This defaults to the area of square!!!" << endl;
    return s * s;
  }

  // virtual destructor is here because, when you delete the objects then the correct destructors should be called
  virtual ~Shape() {}
};

class Circle : public Shape {
 public:
  float calculate_area(float radius) override { return PI * radius * radius; }
};

class Rectange : public Shape {
 public:
  float calculate_area(float a) override { return a * a; }
};

class Triangle : public Shape {
 public:
  float calculate_area(float base) override { return (1 / 2.0) * base * base; }
};

int main() {
  Base *obj_ptr = new Derived();

  obj_ptr
      ->display();  // there is no virtual function so itt will call the base class display function

  Base1 *obj_ptr1 = new Derived1();
  obj_ptr1
      ->display();  // now as there is a virtual function in Base so it will look at the runtime that,
  // "ok the pointer is of type Base1 but wait what that pointer is pointing to is of Derived1 class so i should call the display from the derived class"

  // you must be wondering why would even someone do that, then look at the above shape class example

  vector<Shape *> s = {new Circle(), new Rectange(), new Triangle()};
  cout << s[0]->calculate_area(3.42)
       << endl;  // now this is automatically calls the function in circle class

  for ( auto shape : s ) {
    delete shape;
  }

  return 0;
}
