#include <iostream>
using namespace std;

void update_ith_bit(int &n, int i, int v) {
	int mask = (1<<i);
    n = (n & (~mask));
    if(v == 1) {
        n = n | mask;
    }
}
int main() {
    int n, i, v;
    cin >> n >> i >> v;
    update_ith_bit(n, i, v);
    cout << n << endl;

    return 0;
}