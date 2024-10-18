#include <iostream>
using namespace std;

int main() {
  cout << "Hello world" << endl;
  cout << endl;

  cout << "hello pw";
  cout << "hello cw";
  cout << endl; // endl moves the cursor to new line

  cout << "hello pw" << endl;
  cout << "hello cw" << endl;

  cout << "hello pw" << endl << "hello cw" << endl;

  cout << "hello pw\n"; //\n is the escape sequence to move the cursor to new
                        //line
  cout << "hello cw\n";

  cout << endl;

  cout << "nn\n\nnn\n";
  cout << "nn/n/nnn/n";
  cout << endl;

  // printing numbers
  cout << 4 << endl;
  cout << 4 + 3 << endl;
  cout << "4+3" << endl;

  // variable and declaration
  int x = 3;
  cout << x << endl;
  x = 10;
  cout << x << endl;
  x = x + 10;
  cout << x << endl;
  x += 2;
  cout << x << endl;
  // shortcuts : +=, -=, *=, /=, %=

  // variable declaration rules
  //  1. variables cant start with a numbers, they can contain numbers but not
  //  in the starting
  //  2. variables cant contain any special characters other than underscore(_)
  //  and dollar sign($)
  //  3. always use meaningful names for variables never use names like a, b, x,
  //  y
  //  4. variables names cant be keywords defined in the language
  //  5. variable names are case sensitive like 'int' is not allowed but 'Int'
  //  or 'iNt' or 'INT' is allowed
  //  6. we mostly give capilalized names to the constant variables

  return 0;
}
