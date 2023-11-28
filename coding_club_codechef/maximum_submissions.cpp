#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t)
    {
        int x;
        cin >> x;
        // 1 min = 2 submissions
        cout << x * 2 << endl;
        t--;
    }
    return 0;
}
