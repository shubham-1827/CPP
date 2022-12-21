#include <iostream>
#include <algorithm>
using namespace std;

int frequency_of_largest(int arr[], int n) {
    //first sorting the array to find the largest.
    sort(arr, arr+n);
    //now, largest will be the last element
    int largest = arr[n-1];
    int frequency {0};
    //finding the frequency of largest number.
    for(int i{0}; i<n; i++) {
        if (arr[i] == largest) {
            frequency++;
        }
    }
    return frequency;
}
int main() {
    int arr[] = {1,4,6,9,3,8,9,5,4,6,8,9,5,8,9,8,9,8,9};
    int n = sizeof(arr) / sizeof(int);
    cout << frequency_of_largest(arr, n) << endl;

    return 0;

}