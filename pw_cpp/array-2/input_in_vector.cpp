#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; // creating a vector with size 0

    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // printing the vector
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // if the size of vector also given then you can use the [] operator to take the input

    return 0;
}