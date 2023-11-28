#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int *p1 = &a, *p2 = &b;
    cout << "Enter two numbers : ";
    cin >> *p1 >> *p2;

    int sum = *p1 + *p2;
    cout << sum << endl;

    return 0;
}