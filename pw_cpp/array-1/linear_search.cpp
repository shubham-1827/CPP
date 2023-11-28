// find any element x in an array

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter a value to find: ";
    cin >> x;

    // using for loop and break
    int i = 0;
    for (; i < size; i++)
    {
        if (arr[i] == x)
        {
            cout << "Element found at index: " << i << endl;
            break;
        }
    }
    if (i == size)
    {
        cout << "Element is not present in array" << endl;
    }

    // boolean flag method and for loop
    bool flag = false;
    for (int j = 0; j < size; j++)
    {
        if (arr[j] == x)
        {
            flag = true;
            break;
        }
    }

    (flag ? (cout << "Element found at index : " << i) : (cout << "Element is not present in array")) << endl;

    // boolean flag method and while loop
    bool is_x = false;
    int j = 0;

    while (!is_x and j < size)
    {
        if (arr[j] == x)
        {

            is_x = true;
        }
        else
        {
            j++;
        }
    }
    if (is_x)
        cout << "Element found at index: " << j << endl;

    else
        cout << "Element is not present in array" << endl;

    return 0;
}
