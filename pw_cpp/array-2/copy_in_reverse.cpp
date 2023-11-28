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

    vector<int> reverse_v;
    for (int i = (n - 1); i >= 0; i--)
    {
        reverse_v.push_back(v.at(i)); // picking the element from the end and pushing it to new vector
    }

    for (int i = 0; i < n; i++)
    {
        cout << reverse_v.at(i) << " ";
    }
    cout << endl;

    // another way

    vector<int> v2(v.size());

    for (int i = (n - 1); i >= 0; i--)
    {
        v2.at(n - i - 1) = v.at(i); // using simple maths
    }

    for (int i = 0; i < n; i++)
    {
        cout << v2.at(i) << " ";
    }
    cout << endl;

    return 0;
}