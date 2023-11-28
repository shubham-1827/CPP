// using the two pointers
#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
}

void sort_positive_to_end(vector<int> &a)
{
    int i = 0, j = a.size() - 1;
    while (i < j)
    {
        if (a.at(i) >= 0 and a.at(j) <= 0)
        {
            swap(a[i], a[j]);
        }
        if (a.at(i) <= 0)
            i++;
        if (a.at(j) >= 0)
            j--;
    }
}
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

    sort_positive_to_end(v);

    display(v);

    return 0;
}