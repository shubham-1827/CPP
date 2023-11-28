#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 5, 2, 5, 7, 8};

    // pointer to array
    int *ptr = arr; // this is correct way, this will initialize the ptr with the first element of the arr
    // int *ptr = &arr; // this is a wrong way this will give error
    // int *ptr = &arr[0]; // this is also a correct way
    // int *ptr = arr[0]; // this is wrong

    // when you give the address of first element of the array to a pointer you are actually giving the whole array to the pointer
    //  you can use the same [] operator with pointer to access the array elements

    ptr[0] = 5;
    for (int i = 0; i < 7; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;

    // another way of printing an array with pointer
    *ptr = 8; // this is equivalent to ptr[0] = 8
    for (int i = 0; i < 7; i++)
    {
        cout << *(ptr + i) << " "; // using the dereference operator
    }
    cout << endl;

    *ptr = 10; // first value of array is change to 10
    ptr++;     // moving to the next memory location in array
    *ptr = 7;  // changing the value at second memory location
    ptr--;     // again moving to the previous memory location

    for (int i = 0; i < 7; i++)
    {
        cout << i[ptr] << endl; // this is somewhat weird syntax to print and array but this works
        // you can also write i[arr] this will also work
    }

    return 0;
}