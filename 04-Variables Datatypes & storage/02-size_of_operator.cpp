//using the size of (sizeof) you can calculate the size of a variable or a data type.
// the bigger the soze of a variable or a datatype the bigger value or bigger precision values it can store.

// to use size of:
// 1. sizeof(data_type)
// 2. sizeof(variable_name) or sizeof vairable_name

// Remember:
// 1 byte = 8 bits.

#include <iostream>
using namespace std;

int main () {
    int x;
    
    cout << "X - " << sizeof x << " Bytes" << endl; // 4 bytes
    cout << "Int - " << sizeof(int) << " Bytes" << endl; // 4 bytes
    cout << "Character - " << sizeof(char) << " Bytes" << endl; // 1 byte
    cout << "Boolean - " << sizeof(bool) << " Bytes" << endl; // 1 byte
    cout << "Float - " << sizeof(float) << " Bytes" << endl; // 4 bytes
    cout << "Double - " << sizeof(double) << " Bytes" << endl; // 8 bytes

    return 0;
}