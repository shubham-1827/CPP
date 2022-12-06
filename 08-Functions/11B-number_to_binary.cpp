
#include <iostream>
using namespace std;

int number_to_binary(int n) {
    int powers_of_10{1};
	int binary{0};
    for(;n!=0; n/=2) {
        int remainder = n%2;
        binary += powers_of_10*remainder;
        powers_of_10*=10;
    }
    return binary;
}
int main () {
    int n; 
    cin >> n;

    cout << number_to_binary(n) << endl;

    return 0;
}