#include <iostream>
using namespace std;

int main()
{
    int x = 4;
    int *p = &x;

    cout << p << endl;
    cout << *p << endl; // this * here is the dereference operator means,
    // p pointer me jo address store hai uss address pe jao aur vaha stored value ko access karo

    x = 10;
    cout << *p << endl; // 10

    // you can also do assignment with dereference operator
    *p = 12;
    cout << x << endl;  // 12
    cout << *p << endl; // 12

    return 0;
}