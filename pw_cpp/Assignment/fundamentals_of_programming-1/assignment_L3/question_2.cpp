// Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.
#include <iostream>
using namespace std;

int main()
{
  float radius, area, circumference, PI = 3.1415;

  cout << "Enter the radius : ";
  cin >> radius;

  area = PI * radius * radius;
  circumference = 2 * PI * radius;

  if (area > circumference)
  {
    cout << "Area of circle is greater than Circumference.";
  }
  else
  {
    cout << "Circumference of circle is greater than Area.";
  }

  cout << endl;

  return 0;
}