/* 
for loop and the whiel loop are the entry control loops 
means they checks the condition at the entry point of loop.
(these loops will never execute if a condition is false.) 

do while loop is a exit control loop.
means it will check the consition at the exit point of the loop.
(this loop will execute atleast once even if the condition is true or false)
syntax:
	do {
        .
        work.....
        .
    }
    while(condition);
*/

#include <iostream>
using namespace std;

int main () {
    int money {};
    
    do {
        cout << "shopping..." << endl;
    	cout << "money - " << money << endl;
    }
    while(money>0);

    return 0;
}

