/*
Termary operator is also called as conditional operator.
syntax:
	(boolean expression) ? condn 1 : condn 2;

if boolean expression is true condn 1 is executed, other wise condn 2 is executed.

you can use ternary operator in place of single statement if else.

ternary operator also has same algorithmic optimisation as the if else.
*/

#include <iostream>
using namespace std;

int main() {
    int x{};
    cin >> x;

    (x%2)==0 ? cout << "Even" : cout << "Odd";
    cout << endl;
	
    //can also be used for assignment:
    int y = (x%5)==0 ? 10 : 20;
    cout << y << endl;
    
    return 0;
}