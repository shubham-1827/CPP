#include<iostream>
#include <cstring>
using namespace std;

int check_password(char real_password[], char password[]) {
    for (int i{0}; i<strlen(real_password); i++) {
        if(real_password[i] != password[i]) {
			return false;
        }
    }
    return true;
}
int main() {
    char real_password[] = "hack1010";
    char password[20];
    cin.getline(password, 20);
    cout << check_password(password, real_password) << endl;

	return 0;
    
}