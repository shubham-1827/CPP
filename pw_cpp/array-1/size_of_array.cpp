#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 5, 3, 6, 4, 6, 8, 5, 7, 9, 5, 4, 7, 8, 5, 4, 6, 8, 8, 5, 6, 7, 8, 5, 3, 5, 7, 8, 4, 3};

    int size = sizeof(arr) / sizeof(arr[0]); // means dividing the whole size by size of 1 will give length

    cout << size << endl;

    return 0;
}