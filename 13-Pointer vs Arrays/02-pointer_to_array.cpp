/*
we can also create pointers to an whole array not only to one single element
and, these kind of pointers are also called row pointer.

so, when we apply pointer arithmentics,
	then adding 1 to pointer will not shift it to next element,
    the pointer will shift by an whole entire array.
*/

#include <iostream>
using namespace std;

int main() {
    int arr[4] = {1,2,3,4};

    //pointer to whole arr.
    int (*ptr)[4] = &arr; // note: here using &arr is compulsory.
	
    cout << arr << endl;
    cout << ptr << endl;
	
    cout << ptr + 1 << endl;
    cout << endl;

	//dereferencing a row pointer will not give the element i gives the address of the 
    //first element in the array.
    cout << *(ptr) << endl;

    //but, once you dereferenced a row pointer now you can apply normal arithmetic 
    //operation on it.
    cout << *(ptr) + 1 << endl;
    //this operation will give you the element of the array.
    cout << *(*(ptr) + 1) << endl;





	return 0;
}

