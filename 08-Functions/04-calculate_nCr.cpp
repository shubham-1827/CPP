/*
nCr = means choosing r objects from the set of n objects.

nCr = (n!) / (n-r!) * (r!) (n>=r)
nCr = 0 (if n<r or (n or r is negative))

*/

#include <iostream>
using namespace std;

long long factorial(int num);
void calculate_nCr(int n, int r);

int main() {
    int n;
    cin >> n;
    cout << "C" << endl;
    int r;
    cin >> r;
	cout << endl;
    calculate_nCr(n, r);

    return 0;
}

long long factorial(int num) {
    long long product{1};
    for(int i{1}; i<=num; i++) {
        product *= i;
    }
    return product;
}
void calculate_nCr(int n, int r) {
    long long nCr;
    if(n>=0 && r>=0 && (n>=r)) {
        nCr = (factorial(n))/(factorial(n-r)*factorial(r));
    }
    else {
        nCr = 0;
    }
    cout << n << " C " << r << " = " << nCr << endl;
}