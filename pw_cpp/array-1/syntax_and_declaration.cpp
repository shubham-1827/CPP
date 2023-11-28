// array is a data structure used to store a collection of data of same data type inside a continous memory address
// continous memory address means jab array banta hai toh 1 sath memory me storage allot hoti hai

#include <iostream>
using namespace std;

int main()
{
    int arr[7]; // this is declaration of array, this is a array of 7 integers

    // in order to access elements inside array we need to use indexes
    // 1 st box in array is marked as 0 and last one is marked as 1 - size of array

    arr[3] = 5;  // accessing the fourth box
    arr[0] = 10; // accessing the first box

    cout << "arr[0]: " << arr[0] << endl;
    cout << "arr[3]: " << arr[3] << endl;

    int arr1[6] = {1, 4, 5, 8, 3, 2}; // this is initialization in the declaration

    // print all elements of the array

    for (int i = 0; i < 6; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    int arr3[7];

    // initializing all indexes using a for loop

    for (int i = 0; i < 7; i++)
    {
        cin >> arr3[i];
    }

    // print all elements of the array

    for (int i = 0; i < 7; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    int arr4[] = {1, 4, 5, 6, 8, 2}; // we can also avoid giving size of array but
    // agar aisa karoge toh initialize declaration me hi karna padhega its a must

    return 0;
}