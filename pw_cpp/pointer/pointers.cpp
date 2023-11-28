#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int *p = &x;

    cout << &x << endl
         << p << endl; // pointers are used to store addresses of variables

    return 0;
}