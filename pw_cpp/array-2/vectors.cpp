#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vectors are used as a replacement for the array
    //  array has a problem of fixed size
    // vectors solves that problem
    //  if we take a vector of size 5 and we try to add the 6th element now then we can do that in vectors
    //  vectors will double itself once there is no space for adding more elements

    vector<int> v; // this creates a vector of size 0.

    // adding 4 elements to the vector
    v.push_back(1);
    v.push_back(4);
    v.push_back(9);
    v.push_back(7);

    // you cant do this if you dont assign the size
    // v[0] = 1;
    // v[1] = 4;
    // v[2] = 9;
    // this will give you segmentation fault

    cout << v[0] << " ";
    cout << v[1] << " ";
    cout << v[2] << " ";
    cout << v[3] << " ";
    cout << endl;

    vector<int> v1;

    v1.push_back(5);
    v1[1] = 3; // this will not give any error but it will also not assign any value to index 1
    v1.push_back(6);
    v1.push_back(5);
    // so to avoid any confusions you should always use pushback with vectors and avoid [] operator

    cout << v1[0] << " ";
    cout << v1[1] << " ";
    cout << v1[2] << " ";
    cout << v1[3] << " "; // this value will be any garbage value
    cout << endl;

    return 0;
}