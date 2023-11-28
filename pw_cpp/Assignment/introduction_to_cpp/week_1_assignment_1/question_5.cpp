// Write a program to find the circumference of a circle with radius 10 in C++.

#include <iostream>
using namespace std;

int main()
{
  float radius = 10, PI = 3.1415;

  float circumference = 2 * PI * radius;

  cout << "The circumference is " << circumference << endl; // expected output = 62.83

  return 0;
}
