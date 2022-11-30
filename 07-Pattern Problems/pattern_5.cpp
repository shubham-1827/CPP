/*
input:
n = 4

output:
   1
  232
 34543
4567654

observations:
1. no. of rows = n
2. in ith row,
		number of ascending numbers = i
        number of descending numbers = (i-1)
3. starting element of ith row = i
*/
#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
	
    
    for(int i{1}; i<=n; i++) {
        //spaces
        for(int spaces{1}; spaces<=(n-i); spaces++) {
            cout << " ";
        }

        //ascending numbers
        int val{i};
        for(int j{1}; j<=i; j++) {
            cout << val;
            val++;
        }
		//taking two step back
        val-=2;

        //descending
        for(int j{1}; j<=(i-1); j++) {
            cout << val;
            val--;
        }
        cout << endl;
    }

    return 0;
}