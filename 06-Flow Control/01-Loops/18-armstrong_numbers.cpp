/*
armstrong number is a number which is the sum of the cube of its digits.
like:
153 = (1*1*1) + (5*5*5) + (3*3*3)

examples:
 	0, 1, 153, 370, 371
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
	
    bool armstrong {true};
    int sum{};
    //using the temperory variable temp because we need 
    // n to compare the sum.
    for(int temp{n}; temp!=0; temp/=10) {
        int last_digit{temp%10};

        sum+=last_digit*last_digit*last_digit;
    }
    if (sum == n) {
        cout << armstrong;
    }
    else {
        armstrong = false;
        cout << armstrong;
    }

    return 0;
}