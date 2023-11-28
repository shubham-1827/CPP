#include <iostream>
using namespace std;

int main()
{
    int *ptr = NULL;

    cout << ptr << endl;  // this will give 0 or 0x0 this is a reserved address for a pointer pointing nowhere
    cout << &ptr << endl; // this will print pointer ka khud ka address

    // null can be used in many ways
    //  1. NULL
    //  2. nullptr
    //  3. 0
    //  4. '\0' - this is a null character, if we write int *ptr = '\0' then it may give a warning but it will create a null pointer

    cout << (int)'\0' << endl; // ascii value of null character is 0

    return 0;
}