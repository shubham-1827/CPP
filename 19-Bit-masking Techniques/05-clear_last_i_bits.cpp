#include <iostream>
using namespace std;

void clear_last_i_bits(int &n, int i) {
    for(int j{0}; j<=i; j++) {
		int mask = (1<<j);
        n = (n&(~mask));
    } 
}
void another_clear_i_bits(int &n, int i) {
    int mask = (-1 << i);
    n = (n&mask);
}
int main() {
    int n, i;
    cin >> n >> i;
    another_clear_i_bits(n, i);
    cout << n << endl;

    return 0;
}