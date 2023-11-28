#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the number of elements in array: ";
    cin >> size;

    int arr[size], sum = 0;

    cout << endl;

    // Input array elements and calculating the sum
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of all the elements in the array is " << sum << endl;

    return 0;
}