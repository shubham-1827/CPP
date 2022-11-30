/* 
switch case is also an alternative for if else.

the break statement is important in every case because if you dont provide break then all the statements below will get executed irrespective of the case condition.

*/
#include <iostream>
using namespace std;

int main () {
    int x{};
    cin >> x;

    switch(x) {
        case 1 : cout << "Monday" << endl;
        		break;
		case 2 : cout << "Tuesday" << endl;
        		break;
        case 3 : cout << "Wednesday" << endl;
        		break;
        case 4 : cout << "Thursday" << endl;
        		break;
        case 5  : cout << "Friday" << endl;
        		break;
        case 6 : cout << "Saturday" << endl;
        		break;
        case 7 : cout << "sunday" << endl;
        		break;
        default : cout << "Enter a valid input." << endl;  
    }

    return 0;
}