#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int min{0}, max{0};
    if (a>b) {
        min = b;
        max = a;
    }
    else {
        min = a;
        max = b;
    }
    int gcd{max};
    for (int i{min}; i>=1; i--) {
        if (min%i == 0 and max%i == 0) {
            gcd = i;
            return gcd;
        }
    }
    return gcd;
}

int main() {
    int a, b;
    cin >> a >> b;
	cout << gcd(a, b) << endl;
    return 0;
}