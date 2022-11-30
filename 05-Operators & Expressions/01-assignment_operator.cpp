//compound assignment operator:
//	+=, -=, *=, /=, %= 

#include <iostream>
using namespace std;

int main () {
    int a = 1;
    cout << a << endl;
    a+=4;
    cout << a << endl;
    a-=2;
    cout << a << endl;
    a*=7;
    cout << a << endl;
    a/=2;
    cout << a << endl;
	a%=5;
    cout << a << endl;

	return 0;
}