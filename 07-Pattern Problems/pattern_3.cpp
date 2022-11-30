/*
input:
n = 3

output:
1
23
456

observations:
1. no. of rows = n
2. no. of characters in ith row = i
*/
#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
	cout << endl; 
    //using val because we always want the increment
    //till the end of program.
    int val{1};
    for (int i{1}; i<=n; i++) {
        for(int j{1}; j<=i; j++) {
            cout << val++;
        }
        cout << endl;
    }
    return 0;
}