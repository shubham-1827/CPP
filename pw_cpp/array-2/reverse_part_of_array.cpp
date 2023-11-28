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

    int i, j;
    cout << "Enter the part you want to reverse : ";
    cin >> i >> j;

    while (i <= j)
    {
        swap(v.at(i), v.at(j));

        i++;
        j--;
    }

    cout << "\nReversed Vector is: \n";

    for (int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    return 0;
}