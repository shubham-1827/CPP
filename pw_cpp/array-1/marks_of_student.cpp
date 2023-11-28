#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. of students : ";
    cin >> n;

    int marks_of_students[n]; // index goes from 0 to n-1

    cout << "Enter the marks of " << n << " students : ";
    for (int i = 0; i < n; i++)
    {
        cin >> marks_of_students[i];
    }

    // if the marks of student is less than 35 then print its index
    for (int i = 0; i < n; i++)
    {
        if (marks_of_students[i] < 35)
            cout << i << " ";
    }
    cout << endl;

    return 0;
}