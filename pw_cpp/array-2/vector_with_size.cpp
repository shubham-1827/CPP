#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5);                                // this is the vector of size 5 and capacity 5 and all the values in it are initialized
                                                     // to 0
    cout << v.size() << " " << v.capacity() << endl; // 5 5

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int> v1(5, 80);                             // this is the vector of size 5 and all the values in it are initialized to 80
    cout << v1.size() << " " << v1.capacity() << endl; // 5 5

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
}