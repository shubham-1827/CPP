#include <iostream>
using namespace std;

int main()
{
    int arr[26], temp;

    arr[0] = 100;
    arr[25] = 200;

    cout << "arr[0] : " << arr[0] << " arr[25] : " << arr[25] << endl;

    temp = arr[0];
    arr[0] = arr[25];
    arr[25] = temp;

    cout << "after swap : " << endl;
    cout << "arr[0] : " << arr[0] << " arr[25] : " << arr[25] << endl;

    return 0;
}