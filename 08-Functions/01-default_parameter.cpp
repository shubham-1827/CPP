/*
you can also set the parameters passed in to default values.
using this, while calling the function, if dont pass the argument to the
function then the default values are used.

and if you pass the required aruments then default values are overwritten by the 
passed in argument values.
*/
#include <iostream>
using namespace std;

void playing_music(char song1 = 'A', char song2 = 'B', char song3 = 'C') {
    cout << "Playing - " << song1 << " "
    					 << song2 << " "
                         << song3 << endl;
}

int main() {
    //all default used
	playing_music();
	
    //default for song2 and song3 used
    playing_music('G');
	
    //no defaults used
    playing_music('C', 'W', 'T');

	return 0;
}