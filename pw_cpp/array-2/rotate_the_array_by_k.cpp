#include <iostream>
#include <vector>
using namespace std;

void rotate_by_k(vector<int> &a, int k) // this function will exceed time limit on leetcode
{
    if (k == 0 or a.size() == 1)
    {
        return;
    }
    for (int i = 1; i <= k; i++)
    {
        for (int j = a.size() - 2; j >= 0; j--)
        {
            swap(a.at(j), a.at(j + 1));
        }
    }
}

void reverse_part_of_array(vector<int> &a, int i, int j)
{
    while (i <= j)
    {
        swap(a.at(i), a.at(j));
        i++;
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

    int k;
    cout << "Enter the value to rotate your array with : ";
    cin >> k;
    if (k > n)
        k = k % n; // this is used if k is greater than n then it makes k less than n

    // rotate_by_k(v, k);

    // in this method we split the array into two parts first is of size n-k and other is of size k
    // then we reverse first part and then second part seperately and then reverse all the elements of the array
    // by using this 3 steps we rotate the array by k
    reverse_part_of_array(v, 0, n - 1 - k);
    reverse_part_of_array(v, n - k, n - 1);
    reverse_part_of_array(v, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    return 0;
}