#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << x << endl;
    cout << "This is address of x : " << &x << endl; // address of operator (&) is used to display the address of the variable
    // address of operator is also called as and operator

    return 0;
}