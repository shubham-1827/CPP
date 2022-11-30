//floor of x is the smallest integer less than or equal to x)
#include <iostream>
using namespace std;

int main() {
    float num, frac_part;
    int floor;
    cout << "Enter a integer to find the floor: ";
    cin >> num;

    frac_part = num - (int)num;

    if(frac_part!=0) {
        if (num>0) {
            floor = (int)num;
        }
        else {
            floor = (int)num - 1;
        }
    }
    else {
        floor = (int)num;
    }
    cout << "The floor of " << num << " is " << floor << endl;

    return 0;
}