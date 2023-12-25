// Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.
#include <iostream>
using namespace std;

int main()
{
  float a, b, c;
  cout << "Enter the sides of triangle : ";
  cin >> a >> b >> c;
  if (a == b == c)
  {
    cout << "The triangle is Equilateral" << endl;
  }
  else if (a == b or a == c or b == c)
  {
    cout << "The triangle is Isosceles" << endl;
  }
  else
  {
    cout << "The triangle is Scalene" << endl;
  }
  return 0;
}