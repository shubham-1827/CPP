#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the number of elements in array: ";
    cin >> size;

    int arr[size], count = 0, x;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number to compare the elements : ";
    cin >> x;
    // counting the number of elements greater than x
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > x)
        {
            count++;
        }
    }

    cout << count << " elements are greater than " << x << endl;

    return 0;
}