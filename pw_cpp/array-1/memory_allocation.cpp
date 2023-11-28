#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};

    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    // the address printed below are one after the another at a 4 byte distance which proves the continous allocation of memory in arrays
    // 0x61ff00
    // 0x61ff04
    // 0x61ff08
    // 0x61ff0c
    cout << endl;
    cout << arr << endl;  // 0x61ff00
    cout << &arr << endl; // 0x61ff00
    // these two above statements will print the address of the first element of array (arr[0])
}