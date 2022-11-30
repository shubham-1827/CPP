/* while using multiple if blocks, you are creating different control flows which are independent of each other. so even if one condition is true all the conditions are still be checked.
if two or more conditions are true both blocks will get executed. */

#include <iostream>
using namespace std;

int main() {
    int marks{0};
    cin >> marks;

    if(marks>=90) {
		cout << "Well Done" << endl;
    }
    if (marks>=80) {
        cout << "Good" << endl;
    }
    if (marks>=70) {
        cout << "Average" << endl;
    }
    else {
        cout << "Work Hard next time!" << endl;
    }

    return 0;
}