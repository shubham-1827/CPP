/*
input:
n=4

output:
   1
  232
 34543
4567654

observation:
1. no. of rows = n
2. no. of spaces in ith row = (n-i)
3. starting element in ith row = i
4. numbers in ascending order in ith row = i
5. numbers in descending order in ith row = (i-1)
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    for(int i{1}; i<=n; ++i) {
		//spaces
        for (int spaces{1}; spaces<=(n-i); spaces++) {
            cout << " ";
        }

        //numbers
        //prints nmbers in ascending order.
        int number{i};
        for(int j{1}; j<=(i); j++) {
          	cout << number;
            number++;
        }
		
        //taking two step back, beacuse the middle number 
        // is common for both ascending and decending part.
        number-=2;
        
        //prints the number in descending order.
        for (int j{1}; j<=(i-1); j++) {
            cout << number;
            number--;
        }
        cout << endl;
    }
	return 0;
}