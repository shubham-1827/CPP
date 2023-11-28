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

    int x;
    cout << "Enter a value to compare with : ";
    cin >> x;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = (i + 1); j < n; j++)
        {
            if (v.at(i) + v.at(j) == x)
            {
                cout << v.at(i) << " + " << v.at(j) << " = " << x << endl;
            }
        }
    }
}
