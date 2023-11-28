#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);

    // you can access in vectors using [] operator or at function
    cout << "Accessing elements of the vector" << endl;
    cout << "First element using []: " << v[0] << endl;
    cout << "First element using .at(): " << v.at(0) << endl;

    // we use .at() bcz it will do bound checking and [] operator will not do bound checking and give garbage value
    //     cout << v[7] << endl; // this will throw garbage value
    //     cout << v.at(7) << endl; // but this is give an exception of out of range
    //  so its better to always use .at() with vectors

    // using the sort function in vectors
    // sort basically arranges the vectors elements in ascending order
    // this sort function is defined in algorithms header file so we need to add that in order to use it
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "\nSorting the vector" << endl;

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}