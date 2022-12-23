/*
in c++, you don't need to use the for loop to read character by character.
	cin will automatically store a whole word or a paragraph inside the array.

cin ignores spaces and null character.

use cin => when you only want to read a single word (no spaces)
use cin.getline() => when you want to store a paragraph (with spaces and null)
*/
#include <iostream>
using namespace std;

int main () {
    char greet[100];
    //no matter anytihng you write it reads only the first word.
    cin >> greet;

	//as we use the cin, the new line character is left in the buffer, 
    //which is read by other cin.getline() and it terminates, without taking input.
    //so, we use cin.get() to consume that new line character.
    cin.get();

    char greet1[100];
    cin.getline(greet1, 100);

    char greet2[100];
    //here '.' is the delimiter which tells getline function if you see this stop.
    //by default the delimiter is the null character.
    cin.getline(greet2, 100, '.');
	
    cout << endl;
    cout << greet << endl << endl;
    cout << greet1 << endl << endl;
    cout << greet2 << endl << endl;

	return 0;
}