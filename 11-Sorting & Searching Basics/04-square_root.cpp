#include <iostream>
using namespace std;

int square_root(int n) {
    for (int i{1};; i++) {
        if(i*i == n) {
            return i;
        }
    }
}

int main() {
    int n;
    cin >> n;
    cout << square_root(n) << endl;

    return 0;
}