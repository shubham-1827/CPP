// Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is
// greater than its perimeter.

#include <iostream>
using namespace std;

int main()
{
  float length, breadth;
  cout << "Enter the length of the rectangle: ";
  cin >> length;
  cout << "Enter the breadth of the rectangle: ";
  cin >> breadth;
  float perimeter = 2 * (length + breadth);
  float area = length * breadth;
  if (area > perimeter)
  {
    cout << "\nThe area of the rectangle is greater than its perimeter.";
  }
  else if (area == perimeter)
  {
    cout << "\nThe area and perimeter of the rectangle are equal.";
  }
  else
  {
    cout << "\nThe perimeter of rectangle is greater than area.";
  }
  return 0;
}