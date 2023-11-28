#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    int *ptr = &n;
    int **ptr2 = &ptr;
    int ***ptr3 = &ptr2;

    cout << ptr << endl
         << ptr2 << endl
         << ptr3 << endl;

    cout << *ptr << endl     // prints value of n
         << **ptr2 << endl   // means jitne stars honge utna andar address me jana hai like , 2 star matlab ptr2 -> ptr -> n
         << ***ptr3 << endl; // here also n hi print hoga

    return 0;
}