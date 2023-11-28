// write a program to reverse the array without using extra array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cout << "Enter the number of elements in vector : ";
    cin >> n;

    cout << "Enter the elements of the vector : ";
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }

    for (int i = 0; i < n / 2; i++) // n/2 will give the integer output so for odd n also middle value will be excluded
    {
        // first pointer is pointing to first element and second pointer is pointing to last element
        // we will reverse these two pointer values
        // and for every next iteration the first pointer will shift forward 1 location and last pointer will shift backward one location
        // towards the centre of vector
        int *p1 = &v.at(i);
        int *p2 = &v.at(n - i - 1);
        swap(*p1, *p2); // using the swap function here
    }

    cout << "\nReversed Vector is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    // another way
    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(v.at(i), v.at(j));

        i++;
        j--;
    }

    // using for loop
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(v.at(i), v.at(j));
    }

    for (int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    return 0;
}