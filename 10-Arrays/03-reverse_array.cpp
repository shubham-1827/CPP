#include <iostream>
using namespace std;

void reverse (int arr[], int n) {
    
    cout << "Array after calling reverse : ";
    for(int i{0}; i<n; i++) {
        cout << arr[n-i-1] << " ";
    }
    cout << endl;   
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8};

    int n = sizeof(arr)/ sizeof(int);

    cout << "Array before calling reverse : ";
    for(int i{0}; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverse(arr, n);

    
	
    return 0;
}