/*
Character arrays:
	1. sequence of characters enclosed in single qoutes stored contigously in memory.
    2. must be terminated by a null character, explicitly
    3. you can perform operations like read, write and update.
    ex - {'a', 'd', 'i'}

String literals:
	1. sequenc3 of characters enclosed in double qoutes.
    2. it is automatically terminated by a null character.
    3. it is a read only memory
    	(means you can access the elements by you can't write or update)
    ex - "adi"
*/
#include <iostream>
using namespace std;

int main() {
    char random[10]; // may contain garbage or nothing.
    char name[] = "Shubham";
    char company[] = "Google";
    char intern[] = {'x', 'y', 'z', '\0'};
    
    //cout function treats character array differently, you will not get an address of 
    //first element in case of character array, whole array will be printed.
    cout << random << endl;
    cout << name << endl;
    cout << company << endl;
    cout << intern << endl;
	
    //note: strlen() calculates the length till it hits the null, and null is not 
    //counted.
    cout << strlen(name) << endl;

    return 0;
}