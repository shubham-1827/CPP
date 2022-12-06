#include<iostream>
using namespace std;

bool is_prime(int n) {
    int i{2};
    for(; i<=(n-1); i++) {
        if(n%i == 0) {
            return false;
        }
    }
        return true;
}
int main() {
    int n;
    cin >> n;

    cout << (is_prime(n) ? "Prime" : "Not-Prime") << endl;
    return 0;
}