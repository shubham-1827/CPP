/*
input: 
NNSEN

Output:
NNE
*/
#include <iostream>
#include<cctype>
using namespace std;

void shortest_path() {

    int x{0};
    int y{0};
	cout << "Enter the directions for the point you want to reach : ";
    char letter{};
	do{
        
        letter = cin.get();
        if(letter != '\n')
        	letter = tolower(letter);

        if (letter == 'n') {
            y++;
        }
        else if (letter == 's') {
            y--;
        }
        else if (letter == 'e') {
			x++;
        }
        else if (letter == 'w') {
            x--;
        }
    }
    while (letter != '\n');

    cout << "Final location => X : " << x << " Y : " << y << endl;
    cout << "The Shortest path is : ";
    
    int vari_x {0};
    int vari_y {0};
    
    while (vari_x != x or vari_y != y) {
        if(vari_y != y) {
            if (y < 0) {
				vari_y--;
                cout << 'S';
            }
            else if (y > 0) {
                vari_y++;
                cout << 'N';

            }
        }
        if (vari_x != x) {
            if (x < 0){
				vari_x--;
                cout << 'W';
            }
            else if (x > 0) {
                vari_x++;
                cout << 'E';
            }
        }
    }
    cout << endl;
}

int main() {
    shortest_path();
    return 0;
}