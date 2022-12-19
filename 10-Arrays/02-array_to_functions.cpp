#include <iostream>
using namespace std;

//whole array is not passed in a function, only the address of the first element of 
//the array is passed in the function.
//means, passing array to function is pass by reference.
void print_array(int arr[] /* or int * arr will also work same*/ ) {

    int n = sizeof(arr) / sizeof(int);

    cout << "Size of arr in print_array : " << sizeof(arr) << endl;
    cout << "And, no. of buckets : " << n << endl;

    for (int i{0}; i<n; i++) {
        cout << arr[i] << " ";
    }
	cout << endl;
}
//that's why we need to pass the size explicitly...
int print_array_with_size(int arr[], int n) {

    cout << "Size of arr in print_array_with_size : " << sizeof(arr) << endl;
    cout << "And, no. of buckets : " << n << endl;

    for (int i{0}; i<n; i++) {
        cout << arr[i] << " ";
    }
	cout << endl;

}
int main() {
    int arr[] = {1,2,3,4,5,6};

    int n = sizeof(arr) / sizeof(int);

    cout << "Size of arr in main : " << sizeof(arr) << endl;
    cout << "And, no. of buckets : " << n << endl;

    for (int i{0}; i<n; i++) {
        cout << arr[i] << " ";
    }
	cout << endl << endl;

    print_array(arr);
    print_array_with_size(arr, n);

    return 0;
}