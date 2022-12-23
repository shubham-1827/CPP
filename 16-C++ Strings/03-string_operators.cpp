#include <string>
#include <iostream>
using namespace std;

int main() {
	string name1{"Shubham"};
    string name2{"Anjali"};

    //you can perform operations like +, +=, >, >=, <, <=, == 
	
    name1 = name1 + "Ayush";
    name1 += "Bhati";
	
    //returns the boolean value.
    cout << (name1 > name2) << endl;  
    cout << (name1 < name2) << endl;
    cout << (name1 == name2) << endl;

    return 0;
}