// WAP for finding the volume of the cylinder by taking radius and height as input.
#include <iostream>
using namespace std;

int main()
{

  float PI = 3.1415;

  float radius, height;
  cout << "Enter the radius and height of cylinder : ";
  cin >> radius >> height;

  float volume = PI * radius * radius * height;

  cout << "The volume of Cylinder is " << volume << endl;

  return 0;
}