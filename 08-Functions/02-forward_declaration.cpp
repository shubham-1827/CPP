/*
in c++, functions are made up of two parts:
	1. declaration:
    	- it includes return type, function name and parameters.
    
    2. defination:
    	- also called as the function body.
        - anything inside the curly braces is called function defination or body.

note:
	functions must be declared before getting called.

forward-declaration of a function or function prototypes:
	you can use prototypes to declare functions at the top and define them somewhere else.
*/
#include <iostream>
using namespace std;

//declaration
void playmusic(int n);

int main() {
 	playmusic(12);

    return 0; 
}

//defination
void playmusic(int n) {
    cout << "Playing song no. - " << n << endl;
}