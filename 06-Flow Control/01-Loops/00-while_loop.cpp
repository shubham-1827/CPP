// loops in c++ are used to repeat a certain lines of code based on the condition.
// a loop a stoping criteria, work , and update statement.
// if you dont provide the udate statement you will end up in an infinite loop.

/*
while loop: it is a loop which allow the entry inside loop only if a certain condition is true.
syntax: 
	while (condition) {
        some work....

        update statement....
    }
*/
#include <iostream>
using namespace std;

int main() {
    int cal{1};
	while(cal<=1000) {
        cout << "Running and burning " << cal << " calories." << endl;
        cal=cal+1;
    }
    cout << "Burnt - " << (cal-1) << " Today." << endl;

    return 0;
}