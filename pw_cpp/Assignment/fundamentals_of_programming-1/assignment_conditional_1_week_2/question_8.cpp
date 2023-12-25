// Given three points (x1, y1), (x2, y2) and
//(x3, y3), write a program to check if all the three points fall on one straight line.

#include <iostream>
using namespace std;

int main()
{
  float x1, x2, x3, y1, y2, y3;
  cout << "Enter coordinates of point 1 (x1 y1): ";
  cin >> x1 >> y1;
  cout << "Enter coordinates of point 2 (x2 y2): ";
  cin >> x2 >> y2;
  cout << "Enter coordinates of point 3 (x3,y3): ";
  cin >> x3 >> y3;

  float m1 = (y2 - y1) / (x2 - x1);
  float m2 = (y3 - y2) / (x3 - x2);
  /* If both slopes are equal then the three points lie on the same straight line */
  if (m1 == m2)
  {
    cout << "The given points lie on the same straight line.";
  }
  else
  {
    cout << "The given points do not lie on the same straight line.";
  }
  return 0;
}
