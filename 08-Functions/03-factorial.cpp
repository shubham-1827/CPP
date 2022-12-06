/*
factorial(0) = 1
factorial(5) = 5*4*3*2*1 = 120
factorial(-ve) = 0
*/
#include <iostream>
using namespace std;

void factorial(int n) {
    long long product{1};
    if(n>=0) {
       for(int i{1}; i<=n; i++) {
			product *= i;
    	} 
    }
    else {
        product = 0;
    }	
    cout << "Factorial of " << n << " is " << product << endl;
}

int main () {
    int n; 
    cin >> n;

    factorial(n);

    return 0;
}