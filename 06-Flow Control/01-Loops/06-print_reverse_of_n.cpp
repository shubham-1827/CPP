#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for( ;n!=0; n=n/10) {
        cout << n%10;
    }
    cout << endl;

    return 0;
}
// in this 100 will reverse to 001.
// so if you want this as output, go with this approach
// but if you want the output as 1 then go with another aproach.