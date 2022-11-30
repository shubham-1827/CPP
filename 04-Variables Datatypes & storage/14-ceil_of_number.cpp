//ceil of x is the largest integer greater than or equal to x.
#include <iostream>
using namespace std;

int main () {
    float num, frac_part;
    int ceil;
    cout << "Enter an integer to find the ceil: ";
    cin >> num;

    frac_part= num - (int)num;
    if(frac_part!=0) {

        if(num<=0) 
        	ceil=(int)num;
		else
        	ceil = (int)num + 1;
    }
    else {
        ceil = (int)num;
    }
    cout << "the ceil of " << num << " is " << ceil << endl;

    return 0;
}