#include <iostream>
#include <vector>
using namespace std;

// unlike arrays passing vectors directly is a pass by value operation
void change(vector<int> a)
{
    a.at(0) = 100;
}

// we need to use the reference operator to pass a vector as a reference
// this is pass by reference using an alias
void change1(vector<int> &a)
{
    a.at(0) = 100;
}

int main()
{
    vector<int> v;

    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    change(v); // this will not change the vector

    for (int i = 0; i < 5; i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    change1(v); // this will change the original vector as it is pass by reference

    for (int i = 0; i < 5; i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    return 0;
}