#include <iostream>
using namespace std;

int main() {
    int physics,chemistry,maths;
    cout << "Enter thr marks for physics, chemistry, maths : ";
    cin >> physics >> chemistry >> maths;

    float average = (physics+chemistry+maths)/3.0; //automatic typecasting

    cout << "The average marks are " << average << endl;

    return 0;
}