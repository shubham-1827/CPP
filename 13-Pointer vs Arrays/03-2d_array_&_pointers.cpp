#include <iostream>
using namespace std;

void first_way_of_passing_2d_array(int (*ptr)[3]) { //in function you only need to 
													//pass the no. of columns.
    cout << "row pointer inside function : " << ptr << endl;
    //accessing a value inside 2d array using row pointer.
	//want to get a value at (1,2) index
    int i = 1;
    int j = 2;
    cout << "Value at (1,2; index : " << *(*(ptr + i) + j) << endl;
    // can also use ptr[i][j], same syntax as an array.
}

int main() {
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
	
    //in case of 2d arrays, name of the 2d array is not the simple pointer,
    //it is a row pointer pointing to the first row of the 2d array.
    cout << "Array name : " << arr << endl;
    cout << "Address of (0,0) : " << &(arr[0][0]) << endl;

    //this will take you to the next row.
    cout << "Array name + 1 : " << arr+1 << endl;
    cout << "Address of (1,0) : " << &(arr[1][0]) << endl;
	cout << endl;

    //this is a row pointer to a 2d array.
    int (*ptr)[3][3] = &arr;
    cout << "Address of (0,0) : " << &(arr[0][0]) << endl;
    cout << "Array name : " << arr << endl;
    cout << "Row Pointer : " << ptr << endl;
	cout << endl;

    first_way_of_passing_2d_array(arr);

    return 0;
}