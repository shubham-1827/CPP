#include <iostream>
using namespace std;

void all_occurences(string para, string word) {
    int index = 0;
    index = para.find(word);
    if (index == -1) {
        cout << "Word not found!" << endl;
    }
    else {
        cout << "All occurrences are : " << index << " ";
    	while(index != -1) {
        	index = para.find(word, index+1);
            if (index != -1) {
            	cout << index << " ";
            }
        }
    }
    cout << endl;    
}
int main() {
	string para = "Shubham is a compettitive programmer, he is also a web developer.";
    string word;
    getline(cin, word);

    all_occurences(para, word);

    return 0;
}