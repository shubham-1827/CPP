/* 
take the input of rows and columns,
and print a matrix like this:

input:
rows = 4
columns = 5

output:
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
*/
#include <iostream>
using namespace std;

int main() {
    int row{}, col{};
    cin >> row >> col;
	
    int num{1};
    for(int i{}; i<row; i++) {

        //print the given number of colums for a row.
        for(int j{}; j<col; j++) {
            cout << num << " ";
            num++;
        }
        // new line
        cout << endl;
    }
    return 0;
}