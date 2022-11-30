/*
input:
n = 4

output:
1
12
123
1234

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
    
    for (int i{1}; i<=n; i++) {
        for(int j{1}; j<=i; j++) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}