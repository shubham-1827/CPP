#include <iostream>
using namespace std;

int main() {
    char names [][50] = {
        "Shubham",
        "Ayush",
        "Piyush",
        "Adi"
    };
    //2d char arrays works differently than int 2d array.

    //in this case it will give the address.
    cout << names << endl;

    //but, in this case it will not give address of the row, it will print the whole 
    // row.
    cout << names[2] << endl;
	cout << endl;
    
    //printing 2d char array
    for(int i{0}; i<4; i++) {
        cout << names[i] << endl;
    }
	
    return 0;
}