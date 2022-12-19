#include<iostream>
using namespace std;

int main() {
    //address of operators is used to link the same address in memory with different 
    //names.
    int x{10};

    //you can leave reference variable uninitialised,
    	//like you cant do int &y;
    int &y = x;

    //now y amd x is poiniting to the same memory address,
    // if you change y, x will also change and vice versa,
    y = 100;
    cout << x << ", " << y << endl;

    return 0;
}