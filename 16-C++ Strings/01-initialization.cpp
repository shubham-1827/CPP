#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1{"Hello"};
    string s2 = "World";
    //you can use both type of brackets
    string s3(s1);
    string s4{s2};
    //cont from the 3rd index
    string s5{s1, 3};
    //prints 10 h
    string s6(10, 'h');
    //prints 5 A
    string s7(5, 65);
    //string concatenation.
    string s8{s1+s2};
	
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;
    cout << s7 << endl;
    cout << s8 << endl;
	
    return 0;
}