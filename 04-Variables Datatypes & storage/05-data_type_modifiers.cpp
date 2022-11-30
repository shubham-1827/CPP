//data type modifeirs are used to modify datatype to get different sizes or behaviours of data types according to need.
//modifiers include:
// 1. signed - can store both positive and negative values
// 2. unsigned - only store positive values.
// 3. short - allocates less storage to a data type
// 4. long - allocates more storage to data type
// like:

#include <iostream>
using namespace std;

int main() {
    signed short a;     
    unsigned short b;

    signed long c;
    signed long long d;
	unsigned long e;
    unsigned long long f;
    //all above are integers.
    // you can also use them with double, float ... etc

    long double g;

    cout << "a " << sizeof(a) << endl;
    cout << "b " << sizeof(b) << endl;
    cout << "c " << sizeof(c) << endl;
    cout << "d " << sizeof(d) << endl;
    cout << "e " << sizeof(e) << endl;
    cout << "f " << sizeof(f) << endl;
    cout << "g " << sizeof(g) << endl;

	return 0;
}