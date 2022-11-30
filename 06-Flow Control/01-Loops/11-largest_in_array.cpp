/*
to find the largest, assume the first element of the array as the largest and iterate over the array to check any larger number you find.
*/
#include <iostream>
using namespace std;

int main() {
    int num{};
    int size{6};
    int int_arr[6];
    cout << "Enter 6 elements of array: ";
    for(int i{}; i<size; i++) {
        cin >> num;
        int_arr[i]=num;
    }
    cout << endl;
	
    int largest{int_arr[0]};
    for(int i{0}; i<size; i++) {
        if(int_arr[i] > largest) {
            largest = int_arr[i];
        }
    }
    cout << "Largest is " << largest << endl;

    return 0;
}