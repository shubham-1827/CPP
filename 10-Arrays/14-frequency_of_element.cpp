/*given an array arr  and the size of the array as n and an element target , you need 
to implement the function getFrequency() which returns the frequency of target in arr.

Example 1.
Input: arr = [1, 2, 2], target = 2
Output: 2
Explanation: target = 2 appears two times in the array.

Example 2.
Input: arr = [1, 2, 2], target = 1
Output: 1
Explanation: target = 1 appears once in the array.

Constraints:
0 <= nums.length <= 20
-2^31 <= nums[i] <= 2^31-1
*/

#include <iostream>
using namespace std;

int frequency_of_target(int arr[], int n, int target) {
    int frequency{0};
    for(int i{0}; i<n; i++) {
        if(target == arr[i]) {
            frequency++;
        }
    }
    return frequency;
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

    cout << frequency_of_target(arr, n, target) << endl;

    return 0;

}