/*
created a function like cin.getline() that reads the whole string until it hits the 
delimiter.

creating a similar function to calvulate the length of the character array.
*/
#include <iostream>
using namespace std;

void read_line(char arr[], int n, int delimiter = '\n') {
	char ch{};
    for(int i{0}; i<n; i++) {
        cin.get(ch);
        if(ch == delimiter) {
            break;
        }
        arr[i] = ch;
    }
}
int length(char arr[]) {
    int i;
    for(i = 1; arr[i] != '\0'; i++){}
	return i;
}

int main() {
    char greet[100];
    read_line(greet, 100, '.');

    cout << endl;
    cout << greet << endl;
    cout << length(greet) << endl;
	
    return 0;
}