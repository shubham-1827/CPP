// in cpp, pointer is a variable the stores address of other variable.

#include <iostream>
using namespace std;

int main() {
    int x{100};

    int *x_ptr{&x};

    cout << x_ptr << endl;
    cout << &x << endl;

    // * = this is a dereference operator, used to access the value which the pointer 
    //is pointing to..

    cout << *x_ptr << endl;
    cout << *(&x) << endl;
    cout << x << endl;

    //you can also define a null pointer which is pointing nowhere,
    //there are 3 ways, you can create a null ptr.
    int *ptr {nullptr};
    int *ptr1 {NULL};
    int *ptr2 {0};

    cout << ptr << endl;
    cout << ptr1 << endl;
    cout << ptr2 << endl;

    return 0;
}