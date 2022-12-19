/*Given an array of integers nums and an integer target, print the indices of the two 
numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use 
the same element twice.

While printing the answer, the order must be maintained.

Example 1.
Input: nums = [2, 7, 11, 15], target = 9
Output: (0,1)
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1]

Example 2.
Input: nums = [3, 2, 4], target = 6
Output: (1,2)
Explanation: Because nums[1] + nums[2] == 6, we return [1, 2]
*/
#include <iostream>
using namespace std;

void pair_sum(int arr[], int n, int target) {
    
	for(int i{0}; i<n; i++) {
        int sum{0};
        for(int j{0}; j<n; j++) {

            sum = arr[i] + arr[j];

            //i!=j is used brcause we always need two different indices like,
            	//for 3 2 4, target = 6
                //if i == j is allowed output is (0,0),
                // if i!=j is applied output is (1,2)
            if(sum == target && i!=j) {
                cout << "(" << i << "," << j << ")" << endl;
                break;
            }
        }
        //used to break out of outer for loop.
        if (sum == target) {
            break;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i{0}; i<(n); i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;

    pair_sum(arr, n, target);

    return 0;
}