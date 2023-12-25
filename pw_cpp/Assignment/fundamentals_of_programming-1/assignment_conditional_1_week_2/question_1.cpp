// Take 2 integers input and print the greatest of them.
#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout << "Enter two integers : ";
  cin >> a >> b;

  if (a > b)
  {
    cout << a << " is greatest.";
  }
  else if (a == b)
  {
    cout << "Both are equal";
  }
  else
  {
    cout << b << " is greatest.";
  }
  cout << endl;

  return 0;
}