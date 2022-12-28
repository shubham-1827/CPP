#include <iostream>
using namespace std;

int get_ith_bit(int n, int i) {
	return (n>>(i))&1;
}
void set_ith_bit(int &n, int i) {
    //agar selected bit 1 hai already then dont do nothing.
    //else agar 0 toh usse 1 kardena hai.
	int mask = (1<<i);
    n = (n | mask);
}
int main() {
    int n;
    cin >> n;

    int i;
    cin >> i;
    cout << get_ith_bit(n,i) << endl;

    int j;
    cin >> j;
    set_ith_bit(n, j);
    
    cout << n << endl;
    return 0;
}