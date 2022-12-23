#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    char name[] = "Shubham Tiwari";
    cout << "For char arrays : " << endl;
    cout << "	1. Using length:" << endl;
    cout << "	";
    for(int i {0}; i<strlen(name); i++) {
        cout << name[i] << " ";
    }
    cout << endl;
    cout << "	2. Using null character: " << endl;
    cout << "	";
    for(int i{0}; name[i] != '\0'; i++) {
        cout << name[i] << " ";
    }
    cout << endl;
    string name1 {"Shubham Tiwari"};
    cout << "For Strings : " << endl;
    cout << "	1. using .length() method: " << endl;
    cout << "	";
    for(int i{0}; i < name1.length(); i++) {
        cout << name1[i] << " ";
    }
    cout << endl;
    cout << "	2. Using the Range Cased for loop: " << endl;
    cout << "	";
    for(auto letter : name1) {
        cout << letter << " ";
    }
    cout << endl;
    cout << "	3. Printing the ASCII values of the characters: " << endl;
    cout << "	";
    for(int letter : name1) {
        cout << letter << " ";
    }
    cout << endl;

    return 0;
}