/*
Given an array nums and it's size n, rotate the array to the right by K steps, where K 
is non-negative.

Example 1.
Input: nums = [1,2,3,4,5,6,7], K = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2.
Input: nums = [-1,-100,3,99], K = 2
Output: [3,99,-1,-100]
Explanation:
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]

Constraints:
1 <= nums.length <= 10^5
-2^31 <= nums[i] <= 2^31 - 1
0 <= k <= 10^5
*/
#include <iostream>
using namespace std;

void rotate_by_k(int arr[], int n, int k) {
    //creating a temporary array.
    int temp[n];

	//adds last 3 elements in the front of temp,
    //n-k+i is used because we dont need to change the order.
    for(int i{0}; i<k; i++) {
        temp[i] = arr[n-k+i];
    }
    //adding remaining elements after the end elements.
    for(int i{0}; i<n-k; i++) {
        temp[i+k] = arr[i];
    }
    //copying elements of temp into arr.
    for(int i{0}; i<n; i++) {
        arr[i] = temp[i];
    }

}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i{0}; i<(n); i++) {
        cin >> arr[i];
    }
	int k;
    cin >> k;
	rotate_by_k(arr, n, k);
    for(int i{0}; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}