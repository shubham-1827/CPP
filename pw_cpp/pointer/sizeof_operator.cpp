#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    cout << sizeof(a) << endl; //4 
    cout << sizeof(int) << endl; // 4
    cout << sizeof(float) << endl; // 4
    cout << sizeof(5.432) << endl; // 8 - this will be pre default considered as double
    cout << sizeof(long long) << endl; // 8
    cout << sizeof(double) << endl; // 8
    cout << sizeof('a') << endl; // 1
    cout << sizeof(char) << endl; // 1
    cout << sizeof(bool) << endl; // 1

    return 0;
}