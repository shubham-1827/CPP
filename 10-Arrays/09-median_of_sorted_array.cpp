#include <iostream>
#include <algorithm>
using namespace std;

int median_of_sorted_array(int arr[], int size) {
    sort(arr, arr+size);
    int sum = 0;
    for (int i{0}; i<size; i++) {
        sum += arr[i];
    }
    int median = sum/size;
    return median;
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for(int i{0}; i<size; i++) {
        cin >> arr[i];
    }
    cout << median_of_sorted_array(arr, size) << endl;

    return 0;

}