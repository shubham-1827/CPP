/*
sorting means arranging the array elements in a particular order.

in c++, you can use the sort function in the algorithm header file to sort an array.
*/
#include <iostream>
#include <algorithm>
using namespace std;

void print_array(int arr[], int n) {
    for (int i{0}; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main () {
    int n;
    cin >> n;

    int arr[n];

    for(int i{0}; i<n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    print_array(arr, n);

    //the sort function uses a comparator to sort the array.
    //greater<int>() is a comparator which is a functional object, used to sort the 
    //array in increasing order.

    sort(arr, arr+n, greater<int>());

    print_array(arr, n);

    return 0;
}