#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

void count_character_types(char arr[]){
 	int length = strlen(arr);
    int letter{}, number{}, whitespaces{}, symbol{};

    for (int i{0}; i<length; i++) {
        if(isalpha(arr[i])){
            letter++;
        }
        else if(isalnum(arr[i])){
            number++;
        }
        else if(isspace(arr[i])){
            whitespaces++;
        }
    }
    symbol = length - (letter + number + whitespaces);
    cout << "Letter : " << letter << endl;
    cout << "Numbers : " << number << endl;
    cout << "Symbols : " << symbol << endl;
    cout << "Whitespaces : " << whitespaces << endl;  
}
int main() {
    char para[100];
    cin.getline(para, 100, '$');
    count_character_types(para);
	return 0;
}