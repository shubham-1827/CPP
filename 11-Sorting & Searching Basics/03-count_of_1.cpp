#include <iostream>
using namespace std;

int count_of_1 (int arr[], int n) {
    int frequency{0};
    for (int i{}; i<n; i++) {
        if(arr[i]==1) {
            frequency++;
        }
    }
    return frequency;
}
int main() {
    int arr[] = {1,0,0,0,0,1,1,1,1,0,1,0,1};
    int n = sizeof(arr) / sizeof(int);
    cout << count_of_1(arr, n) << endl;
    return 0;
}