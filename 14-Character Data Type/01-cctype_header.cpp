/*
cctype is a library to check and convert the character to like lowercase, uppercase.. 
etcs.

There are two sets of functions:

Character classification functions

They check whether the character passed as parameter belongs to a certain category:

isalnum	 - Check if character is alphanumeric (function)
isalpha	 - Check if character is alphabetic (function)
isblank	 - Check if character is blank (function)
iscntrl	 - Check if character is a control character (function)
isdigit	 - Check if character is decimal digit (function)
isgraph	 - Check if character has graphical representation (function)
islower	 - Check if character is lowercase letter (function)
isprint	 - Check if character is printable (function)
ispunct	 - Check if character is a punctuation character (function)
isspace	 - Check if character is a white-space (function)
isupper	 - Check if character is uppercase letter (function)
isxdigit - Check if character is hexadecimal digit (function)

Character conversion functions

Two functions that convert between letter cases:

tolower	 - Convert uppercase letter to lowercase (function)
toupper	 - Convert lowercase letter to uppercase (function)
*/
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char letter{'A'};
    cout << letter << endl;
    //remember functions in cctype returns an integer, so to directly print them use 
    //need to implicitly typecast them.
    cout << char(tolower(letter)) << endl;
    return 0;
}