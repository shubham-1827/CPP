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
2. every ith row has n-i spaces.
3. every ith row has 2i element.
4. every ith row has i elements in increasing order and i elements in decreasing order.
5. Every row starts with the letter 'A'
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i{1}; i<=n; i++) {
        //printing spaces
        for (int spaces{0}; spaces<=(n-i); spaces++) {
            cout << " ";
        }

        //printing letters
    	char letter{'A'};
        
        //for ascending order.
        for(int j{1}; j<=i; j++) {
            cout << letter;
            letter++;
        }

        //moving one step back
        letter--;

        //for descending order.
        for(int j{1}; j<=i; j++) {
            cout << letter;
            letter--;
        }
        cout << endl;
    }
 	return 0;   	
}