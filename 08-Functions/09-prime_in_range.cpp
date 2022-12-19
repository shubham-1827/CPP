#include <iostream>
using namespace std;

bool is_prime_optimised(long long n) {
    long long i{2};
    /*using a=sqrt(b)
    	so, squaring both sides
        	a*a = b
        */
    for(; (i*i)<=n; i++) {
        if(n%i == 0) {
            return false;
        }
    }
    if (n!=1){
        return true;
    }
    else {
        return false;
    }
}

void prime_in_range(long long a, long long b) {
    //determinig the max and min in a and b
    long long min{0}, max{0};
	if (a<=b) {
        min = a;
        max = b;
    }
    else {
        min = b;
        max = a;
    }
    int sum{0};
    //iterating in range [a,b]
    long long i;
    for (i = min; i<=max; i++) {
        if (is_prime_optimised(i)) {
            cout << i << " ";
            sum++;
        }
    }
    cout << endl;
    cout << "Total Primes are : " << sum << endl;
}

int main() {
	long long a, b;
    cin >> a >> b;

    prime_in_range(a, b);

    return 0;
}