/*
staircase search is a searching algorithm to search an element in a row wise amd 
column wise sorted array.

idea:
in starting hold the top right element of the array,
and in every iteration,
	if k > element choosen then move downward by 1 value, and assign the new element  
    to the element choosen.

    if k < element choosen then move left by 1 value, and assign the new element to 
    the choosen element,

    and, repeat this until you find the k,
    (in worst case, you will reach at the other diagonal end of array)
	
    or, this loop will end if you cant find the element in array.
	
*/
#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> staircase_search(int arr[10][10], int rows, int cols, int k) {
    int row_position = 0;
    int col_position = cols - 1;

    int current_element = arr[row_position][col_position];

	//checking if k is in range of array or not.
    if (k<arr[0][0] or k>arr[rows-1][cols-1]) {
        return {-1, -1};
    }
	//while loop finds element in array.
    while(row_position <=rows - 1 and col_position>=0) {
        current_element = arr[row_position][col_position];

        if(current_element == k) {
            return {row_position, col_position};
        }
        else if (current_element > k) {
			col_position--;
        }
        else {
            row_position++;
        }
    }	
    //we are out of loop means element you are looking for is not inside array.
    return {-1, -1};
}
int main() {
    int arr[10][10] = {
        {10,20,30,40},
        {15,25,35,45},
        {20,30,40,50},
        {25,35,45,55}
    };
    int k;
    cin >> k;
    pair<int, int> p = staircase_search(arr, 4, 4, k);
	
    cout << "index of " << k << " is " << p.first << " " << p.second << endl;
    return 0;
}