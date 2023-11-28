#include <iostream>
using namespace std;

void swap(int a, int b)
{ // this swap function will not work because it is pass by value and not pass by reference
    // pass by value means new variables will be used inside function
    a = a + b;
    b = a - b;
    a = a - b;
}
void swap_1(int &a, int &b)
// this is pass by reference as an alias means we dont need to pass pointer in the function and still we will be able to use the same
// variables inside the function
{
    a = a + b;
    b = a - b;
    a = a - b;
}

void swap_2(int *pointer_to_a, int *pointer_to_b)
// this is pass by reference using the pointers , in this case we need to pass the address of the variables and use the dereference operator
// inside the function to access the value of the variable
{
    int a = *pointer_to_a;
    int b = *pointer_to_b;

    a = a + b;
    b = a - b;
    a = a - b;
}
int main()
{
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;

    swap_1(a, b);
    cout << a << " " << b << endl;

    swap_2(&a, &b);
    cout << a << " " << b << endl;

    int *a_pointer = &a, *b_pointer = &b;
    swap_2(a_pointer, b_pointer);
    cout << a << " " << b << endl;

    return 0;
}