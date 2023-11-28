// leetcode
#include <iostream>
#include <vector>
using namespace std;

void sort_colors_dutch(vector<int> &nums)
{
    int n = nums.size();
    int low = 0, mid = 0, high = n - 1;

    while (mid < high)
    {
        if (nums.at(mid) == 2)
        {
            swap(nums.at(mid), nums.at(high));
            high--;
        }
        if (nums.at(mid) == 0)
        {
            swap(nums.at(mid), nums.at(low));
            low++;
            mid++;
        }
        if (nums.at(mid) == 1)
        {
            mid++;
        }
    }
}
void sortColors(vector<int> &nums)
// two pointer two times
{
    int i = 0, j = nums.size() - 1, count_2 = 0;
    while (i < j)
    {
        if (nums.at(i) == 2)
        {
            count_2++;
        }
        if (nums.at(i) == 2 and nums.at(j) != 2)
        {
            swap(nums[i], nums[j]);
        }
        if (nums.at(i) != 2)
        {
            i++;
        }
        if (nums.at(j) == 2)
        {
            j--;
        }
    }

    i = 0, j = nums.size() - 1 - count_2;
    while (i < j)
    {
        if (nums.at(i) == 1 and nums.at(j) == 0)
        {
            swap(nums.at(i), nums.at(j));
        }
        if (nums.at(i) == 0)
        {
            i++;
        }
        if (nums.at(j) == 1)
        {
            j--;
        }
    }
}

void sort_two_pass(vector<int> &a)
{
    int n = a.size();
    int count_0 = 0, count_1 = 0;

    // using this loop we will find the number of zeros and ones in the vector

    for (int i = 0; i < n; i++)
    {
        if (a.at(i) == 0)
            count_0++;
        else if (a.at(i) == 1)
            count_1++;
    }

    for (int i = 0; i < n; i++)
    {
        // this will first add required number of 0 then 1 and then remaining 2's
        if (i < count_0)
            a.at(i) = 0;
        else if (i < count_1 + count_0)
            a.at(i) = 1;
        else
            a.at(i) = 2;
    }
}

void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
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

    // sort_two_pass(v);
    sort_colors_dutch(v);

    display(v);
}