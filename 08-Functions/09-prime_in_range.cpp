#include <iostream>
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

void prime_in_range(int a, int b) {
    //determinig the max and min in a and b
    int min{0}, max{0};
	if (a<=b) {
        min = a;
        max = b;
    }
    else {
        min = b;
        max = a;
    }
    //iterating in range [a,b]
    int i;
    for (i = min; i<=max; i++) {
        if (is_prime_optimised(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
	int a, b;
    cin >> a >> b;

    prime_in_range(a, b);

    return 0;
}