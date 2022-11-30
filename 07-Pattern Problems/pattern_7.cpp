/*
input:
n = 4

output:
AA
ABBA
ABCCBA
ABCDDCBA

observations:
1. no. of rows = n
2. in ith row,
	 characters in ascending = i
     characters in descending = i
3. in every row first character is A
*/
#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    for(int i{1}; i<=n; i++) {
        char letter{'A'};
        //for ascending
        for (int j{1}; j<=i; j++) {
            cout << letter;
            letter++;
        }
        //taking a step back
        letter--;

		//for descending
        for(int j{1}; j<=i; j++) {
            cout << letter;
            letter--;
        }
        //new line
        cout << endl;
    }
    return 0;
}