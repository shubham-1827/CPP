/*
arrays can have dimensions,
	like 1-d, 2-d, 3-d, or.. n-d(with n dimensions)

1D arrays are used to store data in linear form

2D arrays are used to store data in a matrix like format.

3D arrays are mostly used to store coloured images.
	(colours in pixels are made from 3 colors red, blue, green)

4D arrays are mostly used to store videos,
	in this there is a 3d array for each frame and 
    an aditional dimension for the time(means frames per second)

2-D arrays are stored in two ways in meomry:
	1. row major form (mostly used by most computer)
    2. column major form

lets, assume a 2d array,
	1 2 3
    4 5 6
    7 8 9
for row major form, the rows are stored linearly in memory.
	1 2 3  4 5 6  7 8 9
for column major form, the columns are stored linearly in memory,
	1 4 7  2 5 8  3 6 9
*/


#include <iostream>
using namespace std;

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
	print_2d_array(arr, rows, cols);

    return 0;

}