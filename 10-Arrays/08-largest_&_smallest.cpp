#include <iostream>
using namespace std;

pair<int, int> largest_and_smallest(int arr[], int size) {

	int largest{arr[0]};
    int smallest{arr[0]};
    for(int i{0}; i<size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        else if (arr[i] < smallest) {
            smallest = arr[i];
        }
    } 
    return make_pair(largest, smallest);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i{0}; i<(n); i++) {
        cin >> arr[i];
    }

    pair<int, int> p = largest_and_smallest(arr, n);

    cout << p.first << " " << p.second << endl;

    return 0;
}
    