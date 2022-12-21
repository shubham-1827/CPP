/*
you can also perform arithmetics operations on pointers like 
	++(increment), --(decrement), +=, -=, ptr1-ptr2(ptr subtraction)
*/
#include <iostream>
using namespace std;

int main() {
    int arr[4] = {1,2,3,4};

    //addition:
    int *ptr = arr;
    cout << ptr << endl;

    ptr++; //this will move the pointer to the next element in the array.
    		//(and also assigns the address of the next element.)
    cout << ptr << endl;
    cout << ptr + 1 << endl;
    cout << endl;

	//you can do the same with the array name as well.
    cout << arr << endl;

    cout << arr + 1 << endl;
    //but, arr++; will not work because assignment is not sopprted in arr.
	cout << endl;
    //compund assignment.
    ptr = arr;
    ptr += 2; // now, ptr will reach to 3rd element of arr (at index 2).
    cout << ptr << endl;
    cout << *(ptr) << endl;
    cout << arr[2] << endl;
	cout << endl;
    //for substraction every thing will remain same.
	
    //printing array with the help of the pointer.
    ptr = arr;
    for(int i{0}; i<4; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl << endl;

    //compiler sees the arr[1] as *(arr + 1):
    cout << arr[2] << endl;
    cout << *(arr + 2) << endl;
    cout << endl;

    //subtracting two pointers:
    	//subtracting two pointers will give you the one less than number of buckets 
        // there are between two pointer.

    int *ptr1 = arr;
    int *ptr2 = &(arr[3]);

    cout << (ptr2 - ptr1) << endl; // buckets are 4 so output is 3
	
	return 0;

}