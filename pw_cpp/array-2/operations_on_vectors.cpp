#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(9);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(9);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(9);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(9);
    v.push_back(7);

    cout << "Size : " << v.size() << endl
         << "Capacity : " << v.capacity() << endl;

    cout << "Now removing 6 elements from the vector : " << endl;
    v.pop_back(); // this function is used to remove 1 element from the end of the vector
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout << "Size : " << v.size() << endl
         << "Capacity : " << v.capacity() << endl;
    // this time the size of vector changes but capacity remains the same
    //  1 baar jo size ban gaya toh voh ban gaya

    return 0;
}