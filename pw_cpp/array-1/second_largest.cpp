#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the number of elements in array: ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // first finding the largest
    int maximum = INT8_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maximum)
            maximum = arr[i];
    }

    // finding the second largest
    int second_largest = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > second_largest and arr[i] != maximum)
        {
            second_largest = arr[i];
        }
    }

    cout << "second maximum : " << second_largest << endl;

    return 0;
}