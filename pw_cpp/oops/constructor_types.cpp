#include <iostream>

using namespace std;

class testclass {
 private:
  int var1;

 public:
  // this is the default constructor -> with novariable input
  testclass() { var1 = 10; }
};

class TestClass2 {
 private:
  int var1;
  int* ptr;

 public:
  // this is the parameterized constructor -> that initializes the var1 on object creation
  TestClass2(int var, int* ptr) : var1(var), ptr(ptr) {
    cout << "constructor is called" << endl;
  }

  // copy constructor is used when we copy objects
  // like if a is the object of a class testclass2
  // then, testclass2 b = a;
  // here, in this case the copy constructor is called
  TestClass2(TestClass2& obj) {
    cout << "copy constructor is called" << endl;
    this->var1 = obj.var1;
    this->ptr = obj.ptr;
  }

  int* get_var1_address() { return &var1; }
  int* get_value_of_ptr() { return ptr; }

  void set_ptr(int val) { *ptr = val; }
};

class TestClass3 {
 private:
  int var1;
  int* ptr;

 public:
  // this is the parameterized constructor -> that initializes the var1 on object creation
  TestClass3(int var, int* ptr) : var1(var), ptr(ptr) {
    cout << "constructor is called" << endl;
  }

  // this is the deep copy constructor so it copies the value of the variable ptr is pointing to,
  // and assigns a new address to the ptr on the heap so obj1 and obj2 becomes fully independent
  TestClass3(TestClass3& obj) {
    cout << "copy constructor is called" << endl;
    this->var1 = obj.var1;
    this->ptr = new int(*(obj.ptr));
  }

  // calling the destructor to free the memory associated with the ptr obj created on heap
  ~TestClass3() { delete ptr; }

  int* get_var1_address() { return &var1; }
  int* get_value_of_ptr() { return ptr; }

  void set_ptr(int val) { *ptr = val; }
};

int main() {
  int a = 20;
  int* ptr = &a;
  TestClass2 obj1(10, ptr);

  TestClass2 obj2 = obj1;

  cout << obj1.get_var1_address() << endl;
  cout << obj2.get_var1_address() << endl;

  // this is the shallow copy thats why the values of addresses stored in the ptr of both are same
  cout << obj1.get_value_of_ptr() << endl;
  cout << obj2.get_value_of_ptr() << endl;

  // both will change the value of a as both of them are pointing to the same momory location
  obj1.set_ptr(20);
  cout << a << endl;
  obj2.set_ptr(30);
  cout << a << endl;

  TestClass3 obj3(10, ptr);

  TestClass3 obj4 = obj3;

  // here a is only affected by the set_ptr of obj3 because a is directly passed in that
  obj3.set_ptr(20);
  cout << a << endl;
  // for obj4 the value of a is copied to a new pointer location
  obj4.set_ptr(30);
  cout << a << endl;

  return 0;
}
