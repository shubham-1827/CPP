#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
}

void sort(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 1; j < a.size(); j++)
        {
            if (a.at(j) == 0 and a.at(j - 1) != 0)
            {
                // swapping the zero with the previous element
                int temp = a.at(j);
                a.at(j) = a.at(j - 1);
                a.at(j - 1) = temp;
            }
        }
    }
}

void sort_two_pass(vector<int> &a)
{
    // counting the number of zeroes and ones
    int count_0 = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a.at(i) == 0)
        {
            count_0++;
        }
    }

    // adding all the zeroes in the start of the vector
    for (int i = 0; i < count_0; i++)
    {
        a.at(i) = 0;
    }

    // adding all the ones after the zeros
    for (int i = count_0; i < a.size(); i++)
    {
        a.at(i) = 1;
    }
}

void sort_two_pointers(vector<int> &a)
{
    int i = 0, j = a.size() - 1;
    while (i < j)
    {

        if (a.at(i) == 1 and a.at(j) == 0)
        {
            a.at(i) = 0;
            a.at(j) = 1;
        }

        if (a.at(i) == 0)
        {
            i++;
        }

        if (a.at(j) == 1)
        {
            j--;
        }
    }

    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
    cout << endl;
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

    sort_two_pass(v);
}