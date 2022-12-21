/*
in any array the name of the array represents the location or address of the first 
element of the array.
so, if you print the name of the array you will get an address.

the name of the array acts as a constant pointer means once the array is defined, then you can't make that array to point somewhere else.
	but, that's not the case with normal pointers,
    	(you can chage the pointing to address of a pointer)
*/
#include <iostream>
using namespace std;

int main() {
    int arr[4] = {1,2,3,4};
    cout << "Address of array name : " << arr << endl;

    int * ptr1 = arr;
    cout << "Address stored inside ptr1 : " << ptr1 << endl;
	
    //dereferencing pointer and array.
    //(both will give 1st element of the arr)
    cout << *(arr) << endl;
    cout << *(ptr1) << endl;
	
    return 0;
}