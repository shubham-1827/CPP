//increment operator - ++
//decrement operator - --
#include <iostream>
using namespace std;

int main () {
	int a = 3;
    cout << a << endl;
    a++; // a = a + 1 or a += 1
    cout << a << endl;
	
    a--; // a = a - 1 or a -= 1
    cout << a << endl;
	
    //Post increment(a++) and post decrement(a--)
     // means first assignment then increment or decrement
    int b;
    b = a++;
    // equivalent to;
    // b = a;
    // a = a + 1
    cout << a << endl;
    cout << b << endl;

    b = ++a;
    //equivalent to:
    // a = a + 1
    // b = a
    cout << a << endl;
    cout << b << endl;

    return 0;
}