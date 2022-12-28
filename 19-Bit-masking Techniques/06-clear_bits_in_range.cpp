#include <iostream>
using namespace std;
void clear_bits_in_range(int &n, int i, int j) {
    int a = -1 << (j+1);
    int b = (1<<i) - 1;
    int mask = a | b;
    n = n&mask;
}
int main() {
    int n, i, j;
    cin >> n >> i >> j;
    clear_bits_in_range(n, i, j);
    
    cout << n << endl;
	return 0;
}