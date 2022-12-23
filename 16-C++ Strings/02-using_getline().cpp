#include <iostream>
#include <string>
using namespace std;

int main() {
    string para;
    //like cin.getline(), getline() is used to take input the whole string including 
    //whitespaces.
    cout << "Without the explicit delimiter : " << endl;
    getline(cin, para);
	cout << para << endl;

    cout << "With delimiter as a dot : " << endl;
    getline(cin, para, '.');
	cout << para << endl;
	
    /*so summary is:
    1. use cin if want to read without whitespaces.
    2. use cin.get() if you want to read single character including whitespaces.
    3. use cin.getline() if you want to read cstype string.
    4. use getline() if you want to read strings.
 	*/   
    return 0;
}
