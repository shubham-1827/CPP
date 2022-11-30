/*
input:
n = 4

output:
1
22
333
4444

observations:
1. no. of rows = n
2. no. of characters in ith row = i
3. starting element in ith row = i
*/
#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
	cout << endl; 
    
    for (int i{1}; i<=n; i++) {
        for(int j{1}; j<=i; j++) {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}