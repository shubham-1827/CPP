/* if statement is ised to do some task accrding to a certain condition.
if the provided condition is 'true' then,the block of code inside if statement will get executed otherwise not.

else - it is used to do some task if the condition inside if statement is false.

else if - if you want to add multiple conditions in the single control flow you can add else if.

note: 
if you have single statement inside if or else or else if
then you can avoid the curly brackets.
*/
#include <iostream>
using namespace std;

int main() {
    int marks{0};
    cin >> marks;

    if(marks>=90) {
		cout << "Well Done" << endl;
    }
    else if (marks>=80) {
        cout << "Good" << endl;
    }
    else {
        cout << "Work Hard next time!" << endl;
    }

    return 0;
}
/* note:
if more than two conditions are true in a single control flow then only the topmost condition will get executed.
*/
