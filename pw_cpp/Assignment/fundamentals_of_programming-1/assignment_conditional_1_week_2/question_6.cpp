// If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks.
#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cout << "Enter the marks of three students : ";
  cin >> a >> b >> c;
  if (a < b and a < c)
  {
    cout << "First student got the least marks" << endl;
  }
  else if (b < a and b < c)
  {
    cout << "Second student got the least marks" << endl;
  }
  else
  {
    cout << "Third student got the least marks" << endl;
  }
  return 0;
}