#include <iostream>
using namespace std;

int main() {
    /*array is a data structure used to store large data.
    	array is a collection of data of same data type stored contigously in memory.
        	(contigously means yek sath in memory.)
    */
    //this is a uninitialized array means it contains garbage data.
    int arr[10];
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
	cout << endl;
	
    //you can initialize the array to zero by using this.
    int arr1[10] = {0};
    cout << arr1[0] << endl;
    cout << arr1[1] << endl;
    cout << arr1[2] << endl;
	cout << endl;

    //in this starting 3 elements are initialzed other are automatically set to 0.
    int arr2[10] = {8,5,3};
    cout << arr2[0] << endl;
    cout << arr2[1] << endl;
    cout << arr2[2] << endl;
    cout << arr2[3] << endl;
	cout << endl;

	//if you don't provide anything in the no. of buckets then compiler will   
    //automatically detects the size of the array.
	int arr3[] = {1,5,3,8,3,7,9,5,2,5};

    //finding size of array in bytes.
    int n = sizeof(arr3) / sizeof(int);
    cout << "The size of arr3 is " << sizeof(arr3) << endl;
    cout << "And, the number of buckets are " << n << endl;
    cout << endl;

    //printing all elements of an array, using a for loop
    for (int i{0}; i<n; i++) {
        cout << arr3[i] << " ";
    }

    return 0;
}