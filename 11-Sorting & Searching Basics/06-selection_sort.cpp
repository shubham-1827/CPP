/*
selection sort: repeatedly finding the minimum element from the unsorted array and 
putting it at the beggining.
*/

#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {

	for(int i{0}; i<n-1; i++) {
        //at the start min position is i, then, we will update the min position if 
        //there is a smaller element.
        int min_position = i;
        //this loop calculates the smaller element in the remaining array,
        for(int j{i}; j<n; j++) {
            if(arr[j] < arr[min_position]) {
                //updating the min position to index of smallest number.
                min_position = j;
            }
        }
        //out of loop, means we found out the minimum element in remaining array.
        //so we swap that element with the first element of the 'remaining array'.
        swap(arr[i], arr[min_position]);
    }
}
int main() {
    int arr[5] = {5,4,3,2,1};
    for(int i{}; i<5; i++) {
        cout << arr[i] << " ";
	}
    cout << endl;
    cout << "After using selection sort function :" << endl;
    selection_sort(arr, 5);
    for(int i{}; i<5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    
}