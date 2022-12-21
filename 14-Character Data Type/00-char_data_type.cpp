/*
in c++, char data type is used to store a single character.
	the character can be a letter, number, or any special character.
the character must be enclosed with single braces( not double braces)

These characters are stored in as the values of integers,
and these integer associated iwth a particular character are dicided by the
ASCII encoding.

like, for 'A' , ASCII code is 65.

there are 128 character in the ascii encoding, which requires 7bit of storage to store.
but, 
as the minima is 1 byte so 8 bits are alloted to every character data type.
*/

/*
note:
console first sends the user input into a input buffer then cin reads the data from the input buffer.
*/

#include <iostream>
using namespace std;

void print_all_ascii_codes() {
    //prints all the ascii code values.
    //(the application has some problems thats why values 1, 2, 3, 4 are not printing.)
    for(int i{5}; i<=128; i++) {
        cout << i << " - " << (char)i << "  ";
        if ((int)i%5 == 0) {
            cout << endl;
        }
    }
}
void checking(char a) {
    if(a >= 'A' and a <= 'Z' or a >= 'a' and a <= 'z') {
        cout << a << " is a letter." << endl;
    }
    else if(a >= '0' and a <= '9') {
        cout << a << " is a number." << endl;
    }
    else if(a == ' ' || a == '\n') {
        cout << a << " is a whitespace." << endl;
    }
}
int main() {
    print_all_ascii_codes();
	cout << endl;
    char a;
    //using cin you can't read white spaces or enline character, but
    //using the get method you can read all the characters in from the console.
    cin.get(a);
    checking(a);

    return 0;
}