/*
input:
4

output:
1
01
101
0101

observations:
1. no. of rows = n
2. no. of elements in ith row = i
3. even row starts with 0
4. odd row starts with 1
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
	
    for (int i{1}; i<=n; i++) {
        for(int j{1}; j<=i; j++) {
            // checking if row is even or odd and checking
            // position is even or odd.

            if(i%2==0) {
				if(j%2==0) {
                	cout << 1;
            	}
            	else {
             	    cout << 0;
            	}      	
            }
            else {
				if(j%2==0) {
                	cout << 0;
            	}
            	else {
                	cout << 1;
           	 	}      	
            }
            
        }
        //new line
        cout << endl;
    }
    return 0;
}