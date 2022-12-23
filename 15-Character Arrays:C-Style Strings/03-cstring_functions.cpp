#include<iostream>

//this is a library which contains certaing function for ease of the user.
//like, functionsfor string copy, string concatenation, compare etc.
#include <cstring>

using namespace std;

int main () {
    char name1[10];
    //removes prevopios data and adds new data
    strcpy(name1, "Shubham");
    
    char greet[100] = "Hi ";
    //concatenate the two strings
    cout << strcat(greet, name1) << endl;

    char random[100] = "hi how are you whats going on?";
    //this will return the pointer to the string starting from 'y' in this case.
    cout << strstr(random, "you") << endl;

    return 0;

}