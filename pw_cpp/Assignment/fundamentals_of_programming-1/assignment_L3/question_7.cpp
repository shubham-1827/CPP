// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).

#include <iostream>
using namespace std;

int main()
{
  float x, y;
  cout << "Enter the coordinates : ";
  cin >> x >> y;

  if (x == 0 and y == 0)
  {
    cout << "The point is at origin." << endl;
  }
  else if (x == 0 and y != 0)
  {
    cout << "The point is on the y-axis." << endl;
  }
  else if (x != 0 and y == 0)
  {
    cout << "The point is on the x-axis." << endl;
  }
  else
  {
    cout << "The point is neither on x or y-axis" << endl;
  }
  return 0;
}