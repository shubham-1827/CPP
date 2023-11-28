#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                count++;
                if (s[i] == 1)
                {
                    s[i + 1] = 0;
                }
                else
                {
                    s[i + 1] = 1;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}