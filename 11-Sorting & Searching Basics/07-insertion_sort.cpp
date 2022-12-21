/*
insertion sort is like playing cards.
idea:
	grab a number an insert it in the right position in the sorted part of array.
*/
#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n) {

    for(int i{1}; i<n; i++) {
		//storing the element to be sorted in the temp variable "current"
        int current = arr[i];

        //this is the previous position, jisse hame hamare current ke element ko 
        //compare karna hai.
        int previous = i-1;

		//we are iterating backwards until 0 and checking if previous elemnet is 
        //greater than current element.
        while(previous>=0 and arr[previous] > current) {
            //moving prevois element 1 position ahead.
            arr[previous + 1] = arr[previous];
            
            //ab aur pichhe jaa rahe hain check karne.
            previous--;
        }
        //out of loop:
        	//1. if position becomes negative or,
            //2. previous element is smaller than current element.
        //adding element to previous + 1, 
        	//because in previous position there is a element which is smaller.
        arr[previous + 1] = current;
    }
}
int main() {
    int arr[5] = {5,4,3,2,1};
    for(int i{}; i<5; i++) {
        cout << arr[i] << " ";
	}
    cout << endl;
    cout << "After using insertion sort function :" << endl;
    insertion_sort(arr, 5);
    for(int i{}; i<5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
	
    return 0;
    
}