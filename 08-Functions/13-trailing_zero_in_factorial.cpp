#include<iostream>
using namespace std;

int trailing_zeros(int n) {
    long long factorial{1};
    for (int i{1}; i<=n; i++) {
        factorial *= i;
        if (factorial%10 == 0) {
            no_of_zeroes++;
        }
        if (i%10 == 0) {
            factorial = 1;
        }
    }
    return no_of_zeroes;
}

int main() {
    int n;
    cin >> n;
    cout << "No of zero's in factorial (" << n << ") are : " << trailing_zeros(n)
    	 << endl;
    return 0;
}