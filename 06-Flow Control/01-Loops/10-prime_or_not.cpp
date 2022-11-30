/*
given a number N, check if its prime

prime number is a number which is only divisible by 1 and the number itself.

if a number divides by any number between [2 ---- n-1] then number is not prime.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i{2};

    for(; i<=(n-1); i++) {
        if(n%i==0) {
            cout << "Not Prime" << endl;
            break;
        }
    }
    if(i==n) {
	    cout << "Prime" << endl;
    }

    return 0;
}