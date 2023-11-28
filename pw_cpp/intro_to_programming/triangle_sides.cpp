#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cout << "Enter the three sides of the triangle : ";
  cin >> a >> b >> c;

  if ((a + b > c) and (a + c > b) and (b + c > a))
  {
    cout << a << ", " << b << ", " << c << " can be the sides of triangle." << endl;
  }
  else
  {
    cout << "invalid triangle" << endl;
  }

  return 0;
}