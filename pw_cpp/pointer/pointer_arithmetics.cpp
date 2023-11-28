#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 3;
    int *p1 = &a, *p2 = &b;

    cout << p1 << endl; // 0x61ff04
    cout << *p1 << endl;

    p1++;                // p1 = p1 + 1
    cout << p1 << endl;  // 0x61ff08
    cout << *p1 << endl; // this value will be random now bcz pointer is pointing to different address now other than a
    // there is a difference of 4 values in this case but we added 1 to pointer bcz this is pointer to int so pointer + 1 means
    // move pointer to 4 memory locations(or bytes) ahead as int is of size 4 bytes

    double c = 1;
    double *p3 = &c;

    cout << p3 << endl; // there is a shift of 8 values in memory location this time bcz its a pointer to double and double occupies 8
    // bytes in the memory memory

    p3++;

    cout << p3 << endl;

    // pointers are used for dynamic memory allocation and deallocation of memory
    // pointers are the only way to access the stored data on the heap
    // and we cant create variables there

    int d = 10;
    int *p4 = &d;

    // *p4++; this will not give correct result we will not get value of d as 11 it will be a random value
    // so its best to use brackets in this case
    (*p4)++; // this is equivalent to x++ or x = x + 1
    cout << d << endl;

    return 0;
}