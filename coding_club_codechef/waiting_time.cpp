#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t)
    {
        int k = 0, x = 0; // k in weeks , x in days
        cin >> k >> x;
        k = k * 7;
        cout << (k - x) << endl;
        t--;
    }
    return 0;
}
