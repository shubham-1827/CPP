#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];

    // input array elements
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // find maximum element in array using linear search algorithm

    int maximum = arr[0]; // assuming first element as maximum and comparing it with other elements of array thats why we are taking i from 1
    int minimum = arr[0]; // assuming first element as minimum and comparing it with other elements of array thats why we are taking i from 1

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maximum)
            maximum = arr[i];

        else if (arr[i] < minimum)
            minimum = arr[i];
    }

    cout << "maximum : " << maximum << endl;
    cout << "minimum : " << minimum << endl;

    return 0;
}