/*
printing a 2d array in the wave form.
like:
input;
1 2 3
4 5 6 
7 8 9

output:
1 4 7 8 5 2 3 6 9
*/
#include <iostream>
using namespace std;

void wave_print(int arr[100][100], int rows, int cols) {

	for(int col{0}; col<cols; col++) {
        if(col%2 == 0) {
            for(int row{0}; row<rows; row++) {
                cout << arr[row][col] << " ";
            }
        }
        else{
            for(int row{rows-1}; row>=0; row--) {
                cout << arr[row][col] << " ";
            }
        }
    }
}
void print_2d_array(int arr[100][100], int rows, int cols) {
    for(int i{0}; i<rows; i++) {
    	for(int j{0}; j<cols; j++) {
        	cout << arr[i][j] << " ";
    	}
        cout << endl;
    }
}

int main() {
    int arr[100][100];
    int rows, cols;
    cin >> rows >> cols;

    for(int i{0}; i<rows; i++) {
    	for(int j{0}; j<cols; j++) {
        	cin >> arr[i][j];
  		}
	}
    cout << endl;
    print_2d_array(arr, rows, cols);
    cout << endl;

    wave_print(arr, rows, cols);

    return 0;
}