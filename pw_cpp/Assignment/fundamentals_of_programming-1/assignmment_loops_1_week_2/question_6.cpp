// Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.

#include <iostream>
using namespace std;

int main()
{
  char ch = 'A';
  while (ch <= 'Z')
  {
    cout << ch << " = " << (int)ch << endl;
    ch++;
  }
  return 0;
}
