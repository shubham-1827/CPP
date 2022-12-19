#include <iostream>
using namespace std;
void add_digits(int n) {
    int sum{0};
    for(;n!=0; n/=10){
        int last_digit = n%10;
        sum += last_digit;
    }
    cout << sum << endl;
}
int main() {
    int n;
    cin >> n;
    add_digits(n);
}