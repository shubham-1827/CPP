/*Given an integer array nums, return 1 if there exists a triplet [nums[i], nums[j], 
nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0,
else return 0.

Example 1.
Input: nums = [-1,0,1,1,6,9]
Output: 1
Explanation: There exists a triplet nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0, so 
we return true.

Example 2.
Input: nums = [0, 1, 1]
Output: 0
Explanation: The only possible triplet does not sum up to 0.

Constraints:
3 <= nums.length <= 3000
-10^5 <= nums[i] <= 10^5
*/
#include <iostream>
using namespace std;

int three_sum(int arr[], int n) {
    int sum{0};

    //looping 3 times
    for(int i{0}; i<n-2; i++) {
        //i+1 is used because we need i!=j
        for(int j{i+1}; j<n-1; j++) {
            //i+2 because i!=k and j!=k
            for(int k{i+2}; k<n; k++) {
                sum = arr[i] + arr[j] + arr[k];
                if (sum == 0){
                    return 1;
                }               
            }
        }
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i{0}; i<(n); i++) {
        cin >> arr[i];
    }
    cout << three_sum(arr, n) << endl;

    return 0;

}