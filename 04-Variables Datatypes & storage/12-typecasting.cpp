//typecasting means changing the data type.

// impilcit typecasting is the automatic typecasting done by the compiler.

//priority order for implicit typecasting:
// 1. float/double
// 2. int
// 3. char
// 4. bool

//Explicit typecasting is done by the programmer.
//means programmer is explicitly telling the compiler to convert to a particular data type.
// (float)5/3 => give a float value.
// (data_type) - this is c-style typecasting.


#include <iostream>
using namespace std;

int main()  {
    // int + float
    int a = 4;
    cout << (float)a/5 << endl;
	cout << a/5.0 << endl;
    cout << endl;

    //int + char
    int b = 1;
    char letter = 'A';
    cout << letter + b << endl;
    cout << (char)(letter + 2) << endl;
    cout << endl;

    //int + bool
    int c = 5;
    bool d = 4;
    cout << c+d << endl;
    cout << (bool)(d+9) << endl;
    cout << endl;

	//char + bool
    char my_letter = 'B';
    bool e = 8;
    cout << my_letter << endl;
    cout << my_letter + e << endl;
    cout << (char)(my_letter + 50) << endl;
    cout << endl;

    return 0;
}