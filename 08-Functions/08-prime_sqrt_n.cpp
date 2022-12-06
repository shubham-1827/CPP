/*
let n=30

divisors:
1, 2, 3, 5, 6, 10, 15, 30

divisors occur in pairs:
1 x 30 = 30
2 x 15 = 30
3 x 10 = 30
5 x 6 = 30

there are smaller divisior and larger divisors
so we can see that,
1. the smaller divisors are always <= sqrt(n) 
2. the larger divisor only exist if smaller divisor exists
	like, 15 x (something) = 30
    	so, 15 x 2 = 30
        so 2 is also a divisor of 30.

so, you need to iterate only till sqrt(n) not n-1.
*/
#include<iostream>
using namespace std;


bool is_prime_optimised(int n) {
    int i{2};
    /*using a=sqrt(b)
    	so, squaring both sides
        	a*a = b
        */
    for(; (i*i)<=n; i++) {
        if(n%i == 0) {
            return false;
        }
    }
        return true;
}
int main() {
    int n;
    cin >> n;

    cout << (is_prime_optimised(n) ? "Prime" : "Not-Prime") 
    	 << endl;
         
    return 0;
}