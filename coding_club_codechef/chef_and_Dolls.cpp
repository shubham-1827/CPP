#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x; // n is the number of dolls, x is the doll type
        cin >> n;
        int arr[100001] = {0}; // this array is used to track the number of same doll types

        if (n % 2 != 0)
        {
            for (int i = 0; i < n; i++)
            {
                cin >> x;
                arr[x]++;
            }
            for (int i = 0; i < 100001; i++)
            {
                if (arr[i] % 2 == 1)
                {
                    cout << (i) << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
