/*
Binary search operates on sorted array(either sorted in increasing or dcresing order.)
idea is we will iterate over n/2 then n/4 hen n/8 until 1

time complexity analysis:
	range 				iterations
	N = N/(2^0)				0

    N/2 = N/(2^1)			1

    N/4 = N/(2^2)			2
	.						.
	.						.
    .						.
    1 = N/(2^k)				k

so, 1 = N/(2^k)
	(2^k) = N
    so, k = logN to the base 2

    means in worst case, after logN to the base 2 steps this program will find the 
    index.
    if N is 16,
    	worst case = log(16) => 4 steps.
*/

//Algorithm:
#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int k) {
	int start = 0;
    int end = n-1;
    int mid{0};

    while(start <= end) {

        mid = (start + end)/2;

        if (k == arr[mid]) {
            return mid;
        }
        else if (k > arr[mid]) {
            // transfer start to mid+1,
            	//(we will ignore rest of the array before mid.)
            start = mid + 1;
        }
        else if (k < arr[mid]) {
            //transfer the end to the mid - 1
                //(we will ignore rest of array after mid.)
            end = mid - 1;
        }
    }
    /*out of loop,
        (means start becomes greater than end,
		like, if we end up at 6 (then start = end) and we want 7, the loop runs 
        again,
            so , we enter (k>arr[mid]) and start becomes mid + 1,
            but end is not changed so start > end and loop will terminate.)
            */
	return -1;
}
int main() {
    int arr [] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(int);
    int k;
    cin >> k;
    int index = binary_search(arr, n, k);
    if (index != -1) {
        cout << k << " is present at index " << index << endl;
    }
    else {
        cout << k << " is not present inside the array." << endl;
    }
}