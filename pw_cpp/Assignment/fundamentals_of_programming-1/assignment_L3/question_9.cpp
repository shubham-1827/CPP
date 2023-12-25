// Write a C++ program to input any character and check whether it is the alphabet, digit or special character.

#include <iostream>
using namespace std;

int main()
{
  char ch;
  cout << "Enter a character : ";
  cin >> ch;

  int ascii = (int)ch;

  cout << "The given character is a ";
  if (ascii >= 'A' and ascii <= 'Z')
  {
    cout << "Capital Alphabet";
  }
  else if (ascii >= 'a' and ascii <= 'z')
  {
    cout << "Lowercase Alphabet";
  }
  else if (ascii >= '0' and ascii <= '9')
  {
    cout << "Number";
  }
  else
  {
    cout << "special character";
  }
  cout << endl;
  return 0;
}