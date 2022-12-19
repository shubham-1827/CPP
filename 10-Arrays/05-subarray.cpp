/*
subarray is a continous part of a array.
	like, for {1,2,3,4,5,6},
    {1,2} is a subarray, {3,4,5} is a subarray.
    but, {2,4} is not a subarray.

total no. of subarray for a array of size n:
	= n(n-1)/2
*/
#include <iostream>
using namespace std;

void print_subarray(int arr[], int n) {
	//first loop sets the starting point of subarray
    for(int i{0}; i<n; i++) {
		//second loop is used to find all the end points for a given starting point.
    	for(int j{i}; j<n; j++) {
			//third loop prints elements between i and j.(between start and end)
        	for(int k{i}; k<=j; k++) {
            	cout << arr[k] << " ";
        	}
        	cout << endl;
    	}
		cout << endl;
    }
	cout << endl;
}

int main() {
  
    int arr[] = {1,2,3,4};
    print_subarray(arr, 4);

    return 0;
}