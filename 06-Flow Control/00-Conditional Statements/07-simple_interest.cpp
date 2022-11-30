// if time = [1,2] then, rate = 5.00%
// if time = [3,~] then, rate = 6.00%

#include <iostream>
using namespace std;

int main() {
    double P, R, T, SI;
	cout << "Enter the Principal and Time : ";
    cin >> P >> T;

    if (T>=1 && T<=2) {
    	R = 5;
    }
    else {
        R = 6;
    }
    SI = (P*R*T)/100;
    cout << "The simple interest for your FD is " << SI << endl;

    return 0;
}