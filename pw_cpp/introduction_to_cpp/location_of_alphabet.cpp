#include <iostream>
using namespace std;

int main()
{
  char ch;
  cout << "Enter a Character : ";
  cin >> ch;

  int location;

  if ((int)ch > 96)
    location = (int)ch - 96;
  else if ((int)ch > 64)
    location = (int)ch - 64;

  cout << "The location of the alphabet is " << location << endl;

  return 0;
}