#include <iostream>
#include <string>
using namespace std;

int main() {
    string name {"Shubham is a competitive programmer. he is also"};
    string word;
    getline(cin, word);

    //it finds the substring of a character inside the string and returns the index of 
    //the first character in the string.
    //if nothing is found return value is -1.

	int index = name.find(word);
    
    if (index == -1) {
        cout << "Word not found!!" << endl;
    }
    else {
        cout << "word is fount at index " << index << endl;
    }	

    //finding the second occurence.
    //now the search will begin after the previos index.
    index = name.find(word, index+1);
    cout << "Second occurence is at : " << index << endl;

    return 0;

}