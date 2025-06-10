#include <iostream>
#include <string>

using namespace std;

class Player {
  // public can be accesed by anyone like from outside or inside or in desived classes
  // protected can be accessed inside the class and in the derived classes
  // private can be accesesed only inside the class and by the friend functions
 public:
  string name;
  int health;
  int level;
  int exp;
};

int main() {
  // learning OOPs in c++

  // the four pillars of OOPS

  // 1. abstraction - means offering only essential info to the user while hiding the implementation
  //  like, how it works

  // 2. data encapsulation - it is also called as data hiding, means hiding the sensitive that should not be accessed by user
  //  so, it is basically bundling data into a class and using access modifiers like private, public, protected to manage the information

  // 3. Inheritance - This concept is same as we (humans) inherit different properties or features from the parrents
  //  just like that classes in cpp can use inheritance to inherit or use the attributes and properties of different parent classes
  // Types of inheritance -> 1. Multi-level Inheritance, 2. Multiple Inheritance, 3. Heirarchial Inheritance, 4. Hybrid Inheritance

  // 4. Polymorphism - Polymorphism: Polymorphism allows objects of different classes to be treated as objects of a common
  //  superclass. It enables methods to be invoked on objects without needing to know the specific class. This helps
  //  in writing more flexible and reusable code.
  // Types of Polymorphism : 1. Run time Polymorphism, 2. compile time Polymorphism
  // Function and operator overloading comes under compile time Polymorphism
  // function overriding or say Virtual Functions comes under run time Polymorphism

  // classes and objects
  // classes are user defined data types
  // and ojects are the instances of there classes
  // which can use the attributes and methods of the class
  Player shubham;
  shubham.exp = 10;
  shubham.level = 20;
  shubham.health = 90;
  shubham.name = "shubham";

  cout << shubham.level << endl;

  return 0;
}
