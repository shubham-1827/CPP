#include <iostream>
using namespace std;

void pass_by_value (int x) {
	x = 200;
    cout << "x inside pass by value : " << x << endl;
}
void by_using_pointer (int * ptr) {
    *ptr = 200;
    cout << "x inside by_using_pointer : " << *ptr << endl;
}
void by_using_reference_variable (int &y) {
    y = 200;
    cout << "x inside by_using_reference_variable : " << y << endl;
}

int main() {
    int x{100};
	cout << "x before pass_by_value : " << x << endl;
    pass_by_value(x);
	cout << "x after pass_by_value : " << x << endl;
    cout << endl;

    int *x_ptr = &x;
	cout << "x before by_using_pointer : " << x << endl;
    by_using_pointer(x_ptr);
	cout << "x after by_using_pointer : " << x << endl;
    cout << endl;
	
    x = 100;
	cout << "x before by_using_reference_variable : " << x << endl;
    by_using_reference_variable(x);
	cout << "x after by_using_reference_variable : " << x << endl;

	return 0;
}