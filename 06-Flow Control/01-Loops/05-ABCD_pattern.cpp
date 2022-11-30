/*
input:
n=5

output:
ABCDEEDCBA
ABCDDCBA
ABCCBA
ABBA
AA

observations:
1. no. of rows = n
2. in ith row, (no. of elements/2) = (n-i)
 	(where i starts from 0 to (n-1))
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
	
    for (int i{0}; i<=n; i++) {
        
        char letter{'A'};
		// n-i letters in increasing order.
        for(int ascend{1}; ascend<=(n-i); ascend++) {
            cout << letter;
            letter++;
        }
        //we reached 1 letter ahead so we need to step back
        letter-=1;

		//n-i letters in decreasing order.
        for(int descend{1}; descend<=(n-i); descend++) {
            cout << letter;
            letter--;
        }
        //new line
        cout << endl;
    }
    return 0;
}