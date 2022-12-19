//Implement a function that takes an array as argument and returns the kth smallest 
//element of the array.
#include <iostream>
using namespace std;

int kth_smallest_element(int arr[], int size, int k) {
    sort(arr, arr+size);
    return arr[k-1];
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for(int i{0}; i<size; i++) {
        cin >> arr[i];
    }

    int k{1};
	cin >> k;

    cout << kth_smallest_element(arr, size, k) << endl;

    return 0;

}