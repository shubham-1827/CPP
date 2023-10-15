#include <iostream>
using namespace std;

int main()
{
  cout << "Hello world" << endl;
  cout << endl;

  cout << "hello pw";
  cout << "hello cw";
  cout << endl; // endl moves the cursor to new line

  cout << "hello pw" << endl;
  cout << "hello cw" << endl;

  cout << "hello pw" << endl
       << "hello cw" << endl;

  cout << "hello pw\n"; //\n is the escape sequence to move the cursor to new line
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
}