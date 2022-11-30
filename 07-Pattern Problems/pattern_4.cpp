/*
input:
n = 4

output:
   *
  ***
 *****
*******

observations:
1. no. of rows = n
2. no. of spaces in ith row = (n-i)
3. no. of stars in ith row = (2i-1)
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i{1}; i<=n; i++) {

        //spaces
        for (int spaces{1}; spaces<=(n-i); spaces++) {
            cout << " ";
        }
        //stars
        for (int stars{1}; stars<=(2*i-1); stars++) {
            cout << "*";
        }
        // new line
        cout << endl;
    }
    
    return 0;
}