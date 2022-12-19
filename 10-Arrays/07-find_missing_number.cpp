/*
Given an array A of size (n-1) with all integers from 1 to n except one missing number.

Implement a function that takes A as an argument and returns the missing number.

Sample Input
3 4 2
6 3 2 5 1
Sample Output
1
4
Explanation :
for test case one, n = 4 and 1 is missing.
Similarly for test case two, n = 6 and 4 is missing.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int missing_number(int arr[], int n) {
    sort(arr, arr + n);
	
    int j{1};
    for(int i{0}; i<n; i++) {
		if(arr[i] != j) {
            return j;
    	}
        j++;
    }
	return j;
}
int main() {
    int n;
    cin >> n;
    int arr[n-1];
    for (int i{0}; i<(n-1); i++) {
        cin >> arr[i];
    }
    for(int i{0}; i<(n-1); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
	
	cout << missing_number(arr,n-1) << endl; 

	return 0;
}