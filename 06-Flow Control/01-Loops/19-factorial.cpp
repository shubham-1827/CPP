/*
factorial is denoted by !
so;
5! = 5*4*3*2*1 = 120
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
	
    int product{1};
    for(int i{1}; i<=n; i++) {
		product *= i;
    }
    cout << product;

    return 0;
}