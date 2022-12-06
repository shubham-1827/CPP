/*
function overloading is creating many functions with the same name, but
		1. different datatypes of parameter passed
        2. different number of parameters passed.
*/
#include <iostream>
#include <vector>
using namespace std;

//Different datatype parameters
void print(int n) {
    cout << n << endl;
}
void print(vector<int> a) {
    for(int x:a) {
        cout << x << " ";
    }
    cout << endl;
}

//different number of parameters.
//for square
void area(int a) {
    cout << (a*a) << endl;
}
void area(int l, int b) {
    cout << (l*b) << endl;
}


int main() {
    vector<int> vec {1,2,3,4,5,6};

	print(16);
    print(vec);
    
    area(6);
    area(2, 6);

    return 0;
}