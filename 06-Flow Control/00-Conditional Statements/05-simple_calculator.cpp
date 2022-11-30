#include <iostream>
using namespace std;

int main() {
    int a{}, b{};
    char operation{};
	
    cout << "Enter the two integers: ";
    cin >> a >> b;
    cout << "Enter the operation: ";
    cin >> operation;
	
    switch(operation) {

        case '+' : cout << (a+b);
    		break;
        case '-' : cout << (a-b);
        	break;
        case '*' : cout << (a*b);
        	break;
        case '/' : cout << (a/b);
        	break;
        case '%' : cout << (a%b);
        	break;
        default : cout << "Enter a valid operation.";
    }
    cout << endl;

    return 0;
}