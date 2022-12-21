/*
Bubble sort is a sorting algorithm insprired by bubbles popping in the hot water.
		(like, small bubbles rise from bottom getting bigger and bigger until the pop.)
    idea:
    - Move the largest element to the end by swapping it with the adjacent element.
*/
#include <iostream>
using namespace std;

void bubble_sort (int arr[], int n) {

    //we only need to run outer loop for n-1 times, because in the end only 1 element 
    //is left which is already smallest.
    for(int i{0}; i<n-1; i++) {
        //once one element is sorted we dont need to iterate over full array,
        // we can ignore the elements in the end which are already sorted.
        for(int j{0}; j<(n-1-i); j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i{}; i<n; i++) {
        cin >> arr[i];
	}
    cout << "After using bubble sort function :" << endl;
    bubble_sort(arr, n);
    for(int i{}; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;  
}