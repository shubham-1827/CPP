#include<iostream>
#include <cstring>
using namespace std;

int main() {
    char name1[100];
    char name2[100];
    cin.getline(name1, 100);
    cin.getline(name2, 100);
	
    int compare = strcmp(name1, name2);
    if (compare > 0) {
        cout << name1 << " comes after " << name2 << endl;
    }
    else if (compare < 0) {
        cout << name1 << " comes before " << name2 << endl;
    }
    else {
        cout << "Both are equal." << endl;
    }
    return 0;
}