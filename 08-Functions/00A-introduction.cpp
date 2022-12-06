/*
functions are used to organise code into different sections. (just like chapters in a book)

if you have a big program, then you must use functions to 
increase readability.

functions also helps in reusability of the code.
like;
if you have a function for checking prime numbers.
then you can call that function as many times as you want inside main.

functions are not executed automatically, you must call them in main.

declaring a function:
	return_type func_name (parameters if any) {

        work...

        return value (optional)
    }

calling a function:
	int main () {

        prime_check(7);
    }
*/
#include <iostream>
using namespace std; 

void play_music() {
    cout << "Playing Music" << endl;
}

//you can also pass data to functions through parameters.
//parameters are variables inside the function.

void play_music2(int n) {
    cout << "playing song no. " << n << endl;
}

//there can be as many parameters as we want, just seperate them with comma(,)

void play_music3(char song1, char song2, char song3) {
    cout << "Playing - " << song1 << " " << song2 << " " << song3 << endl;
}

int main() {
    //calling functions in main
    play_music();
    play_music2(5);
    play_music3('A', 'D', 'H');

    //calling a function many times
    play_music();
    play_music();
    play_music();
    play_music();
    play_music();
    play_music();
    play_music();
    play_music();
    
    return 0;
}

