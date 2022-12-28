#include <iostream>
using namespace std;

int get_ith_bit(int n, int i) {
    /*like, for 5 = 000101 
    	and want 2nd bit, (i start from 0)
        so, 5>>i = 0001
        now &1 will fpgive the last bit.
    */
	return (n>>(i))&1;
}
int main() {
    int n;
    cin >> n;
    int i;
    cin >> i;
    cout << get_ith_bit(n,i) << endl;
    return 0;
}