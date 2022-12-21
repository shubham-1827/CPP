#include <iostream>
using namespace std;

void spiral_print(int arr[][10], int rows, int cols) {
    //takes a nxm 2d array and prints the elements in the spiral order.
    //idea is first print the outer spiral and then print the inner spirals one by one.
	int start_row = 0;
    int start_col = 0;
    int end_row = rows - 1;
    int end_col = cols - 1;

    while(start_row <= end_row && start_col <= end_col) {
		// ---------
        for(int col{start_col}; col<=end_col; col++) {
			cout << arr[start_row][col] << " ";
        }

        //----------
        //			|
        //          |
        //          |
        for(int row{start_row+1}; row<=end_row; row++) {
            cout << arr[row][end_col] << " ";
        }
		
        //----------
        //			|
        //          |
        //          |
		//----------
        for(int col{end_col-1}; col>=start_col; col--) {
            //avoids repeted printing of columns when columns are odd.
            if (start_row == end_row) {
                break;
            }
            cout << arr[end_row][col] << " ";
        }
        // ----------
        //|			|
        //|         |
        //|         |
		// ----------
        for(int row{end_row-1}; row>=start_row+1; row--) {
            //avoids repeted printing of rows when rows are odd.
            if (start_col == end_col) {
                break;
            }
            cout << arr[row][start_col] << " ";
        }
        //moving on to the inner spiral...
        start_col++;
        end_col--;
        start_row++;
        end_row--;
    }
}

void print_2d_array(int arr[][10], int rows, int cols) {
    for(int i{0}; i<rows; i++) {
    	for(int j{0}; j<cols; j++) {
        	cout << arr[i][j] << " ";
    	}
        cout << endl;
    }
}

int main() {
    int arr[10][10];
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

    spiral_print(arr, rows, cols);

    return 0;
}