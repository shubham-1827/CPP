// last digit of number = n%10
//reduce the number by 1 digit = n/10 (where n is integer.)
#include <iostream>
using namespace std;

int main () {
    long long n{};
    cout << "Enter a big number: ";
    cin >> n;
    int i, val{};
	int sum{};

    while (n!=0) {
        int last_digit = n%10;
        sum += last_digit;

        //update
        n=n/10;
    }
    cout << sum << endl;

    return 0;
}