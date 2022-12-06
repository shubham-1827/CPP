#include <iostream>
using namespace std;

int binary_to_number(int n) {
    int powers_of_2{1}; //initially power of 2 is 0, so value is 1.
    int digit{};
    for(;n!=0; n/=10) {
    	digit+=(n%10)*powers_of_2;
        powers_of_2*=2;
    }
    return digit;
}
int main() {
	int n;
    cin >> n;
    cout << binary_to_number(n) << endl;
    return 0;
}