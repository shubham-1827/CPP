#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
	
    int sum{};
    for(;n!=0;n/=10) {
        int last_digit {n%10};
        
        if(last_digit%2!=0) {
            sum += last_digit;
        }
    }
    cout << sum << endl;

    return 0;
}