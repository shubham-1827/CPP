/*
Searching means finding the index of a given element in the array.

linear search in c++ is a bruteforce technique in which you are just interating over whole array in order to find the index of the element .

in lenear search we return the index if the element is present in the array.
else, we return -1

as we are iterating over all elements of array,
so,
	operations proportional to N
    so program will take O(N).
*/
#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int k) {
    for (int i{0}; i<n; i++) {
        //cheking if k is in array.
        if(arr[i] == k) {
            return i;
        }
    }
    //out of loop, means k is not there in array.
    return -1;
}
int main() {
    int arr[] = {1,4,5,0,3,6,8,2,8,9,5};
    int n = sizeof(arr) / sizeof(int);
    int k;
    cin >> k;
    int index = linear_search(arr, n, k);
    if (index != -1) {
        cout << k << " is present at index " << index << endl;
    }
    else {
        cout << k << " is not present inside the array." << endl;
    }
    return 0;
    
}