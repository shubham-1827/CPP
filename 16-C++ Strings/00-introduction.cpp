/*
in C++,
string is a class defined in the standard template library (STL).

Properties of string :
	1. stored contigoiusly in memory.
    2. dynamic size, can grow and shrink at the runtime.
    3. dont have a fixed size, unlike char arrays.
    4. supports many member functions for help, no need to write them from scratch
    5. they are safer option than char arrays, because they provide methods for bonds 
    checking.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Shubham";
    cout << name.at(3) << endl;

    return 0;
}

