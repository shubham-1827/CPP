#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k; // n are balls , k are boxes
        cin >> n >> k;
        // that formula of k is the minimum number of balls required to fill the boxes with different no. of balls
        if (n >= (k * (k + 1)) / 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}