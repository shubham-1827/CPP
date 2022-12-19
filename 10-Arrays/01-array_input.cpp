#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int size = sizeof(arr) / sizeof(int);
    cout << "The size of array is " << size << endl;
	
    //no. of elements to enter in the array.
    int n;
    cin >> n;
    for (int i{0}; i<n; i++) {
        cin >> arr[i];
    }

    //printing the array..
    for(int i{0}; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int m;
    cin >> m;
    //in later c++, you can also set the array size as a variable.
    int arr1[m];

    cout << "The size of array is " << sizeof(arr1)/sizeof(int) << endl;

    for (int i{0}; i<m; i++) {
        cin >> arr1[i];
    }

    //printing the array..
    for(int i{0}; i<m; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

	return 0;

}