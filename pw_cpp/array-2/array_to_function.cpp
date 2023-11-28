#include <iostream>
using namespace std;

// passing arrays to function is always pass by reference
void display(int a[], int size)
// this int a[] is not really an array passed to the function it is the pointer that points to the first element of passed array
//  because of that we cant calculate the size of the array inside of the function we will get a warning
{
    // int size = sizeof(a) / sizeof(a[0]); this line will give warning if ran
    cout << a << endl; // this array passed is same array as in main, both have same addresses
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void change(int b[])
{
    b[0] = 100;
}
int main()
{
    int arr[] = {1, 3, 5, 2, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << arr << endl;

    display(arr, size);
    change(arr);
    display(arr, size);

    return 0;
}