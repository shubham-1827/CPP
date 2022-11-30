/*
lest take n=123,

rev_n = 0
so, loop execution starts,
	applying rev_n = (rev_*10) + last_digit;
    3 ((0*10)+3)
    32 ((3*10)+2)
	321 ((32*10)+1)
    cout << rev_n;
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
	int rev_n{0};

    for( ;n!=0; n/=10) {
        int last_digit = n%10;
        rev_n = (rev_n*10) + last_digit;
    }
    cout << rev_n << endl;

    return 0;
}