#include <iostream>
using namespace std;

int main()
{
  char ch;
  cin >> ch;

  int ascii_value = (int)ch;
  if ((ascii_value > 64 and ascii_value < 91) or (ascii_value > 96 and ascii_value < 123))
  {
    cout << "yes its an alphabet" << endl;
  }
  else
  {
    cout << "No its not an alphabet" << endl;
  }

  return 0;
}