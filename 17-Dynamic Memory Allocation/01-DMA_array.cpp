#include <iostream>
using namespace std;

int* create_1D_array(int n) {
    int *arr_ptr = new int[n];

    for (int i{0}; i<n; i++) {
        arr_ptr[i] = i+1;
    }

    return arr_ptr;
}

int ** create_2D_array(int rows, int cols) {

	int ** arr_ptr = new int* [rows];

    for(int i{0}; i<rows; i++) {
        
        int *arr = new int[cols];
		arr_ptr[i] = arr;

        for(int j{0}; j<cols; j++) {
            arr_ptr[i][j] = 1;
        }
    }
    return arr_ptr;
}
int main() {
    int n;
    cin >> n;
    
    int * arr_1d = create_1D_array(n);

    for(int i{0}; i<n; i++) {
        cout << arr_1d[i] << " ";
    }
    cout << endl;

	int rows, cols;
    cin >> rows >> cols;

    int ** arr_2d = create_2D_array(rows, cols);
	
    for(int i{0}; i<rows; i++) {
        for(int j{0}; j<cols; j++) {
            cout << arr_2d[i][j] << " ";
        }
        cout << endl;
    }
	cout << endl;

    return 0;
}