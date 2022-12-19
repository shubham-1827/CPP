/*Given two sorted integer arrays nums1 and nums2, print their intersection.

All the elements in nums1 and nums2 are unique. While printing, the order of elements 
must be maintained.

If there is no intersection, print -1 instead.

Note: Print a white space after each element.

Example 1.
Input: nums1 = [1, 2, 4, 9], nums2 = [2, 3, 5, 9, 11]
Output: 2 9
Explanation: Elements 2 and 9 are present in both arrays.

Example 2.
Input: nums1 = [5, 8, 10], nums2 = [2, 3, 6, 9, 11]
Output: -1
Explanation: There is no element common to both arrays.

Constraints: 0 <= nums1.length, nums2.length <= 20
*/
#include <iostream>
using namespace std;

void intersection_of_arrays(int arr1[], int size1, int arr2[], int size2) {
    int sum{0};

    for(int i{0}; i<size1; i++) {
        for(int j{0}; j<size2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                sum += arr1[i];
            }
        }
    }
    if (sum == 0) {
        cout << -1;
    }

}

int main() {
    cout << "Creating array 1 : " << endl;
    int size1;
    cin >> size1;
    int arr1[size1];
    for (int i{0}; i<(size1); i++) {
        cin >> arr1[i];
    }
    cout << "Creating array 2 : " << endl;
    int size2;
    cin >> size2;
    int arr2[size2];
    for (int i{0}; i<(size2); i++) {
        cin >> arr2[i];
    }
    	
    intersection_of_arrays(arr1, size1, arr2, size2);

    return 0;
}