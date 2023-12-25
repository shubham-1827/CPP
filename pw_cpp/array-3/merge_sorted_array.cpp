#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> &v1, vector<int> &v2) // filling the elements in new vector from front
{
    int n1 = v1.size(), n2 = v2.size();
    // Create a new array of size n1+n2 and copy the elements from both arrays to it
    vector<int> v3(n1 + n2);
    int i = 0, j = 0, k = 0;

    while (k < v3.size())
    {
        if (i >= n1)E
            v3[k++] = v2[j++];
        else if (j >= n2)
            v3[k++] = v1[i++];
        else if (v1[i] < v2[j])
            v3[k++] = v1[i++];
        else
            v3[k++] = v2[j++];
    }
    return v3;
}

vector<int> merge1(vector<int> &v1, vector<int> &v2) // filling the elements in new vector from back
{
    int n1 = v1.size(), n2 = v2.size();
    int i = n1 - 1, j = n2 - 1, k = n1 + n2 - 1;
    vector<int> v3(n1 + n2);
    while (k >= 0)`
    {
        if (i < 0)
            v3.at(k--) = v2.at(j--);
        else if (j < 0)
            v3.at(k--) = v1.at(i--);
        else if (v1.at(i) > v2.at(j))
            v3.at(k--) = v1.at(i--);
        else
            v3.at(k--) = v2.at(j--);
    }
    return v3;
}

int main()
{
    vector<int> v1;
    int n1;
    cout << "Enter the number of elements in first vector : ";
    cin >> n1;

    cout << "Enter the elements of the first vector : ";
    for (int i = 0; i < n1; i++)
    {
        int val;
        cin >> val;
        v1.push_back(val);
    }

    vector<int> v2;
    int n2;
    cout << "Enter the number of elements in second vector : ";
    cin >> n2;

    cout << "Enter the elements of the second vector : ";
    for (int i = 0; i < n2; i++)
    {
        int val;
        cin >> val;
        v2.push_back(val);
    }
    vector<int> v3 = merge1(v1, v2);
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3.at(i) << " ";
    }
    cout << endl;

    return 0;
}