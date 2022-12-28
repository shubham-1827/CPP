/*
idea:
	1. the last bit decides if the number is even or odd.
    	(if last bit is 0 number is even, of 1 them number is odd.)
    2. doing and of(&) 1 with amy number will give the last bit.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << n << " is " << ((n&1) == 0 ? "even" : "odd") << endl; 

    return 0;
}
