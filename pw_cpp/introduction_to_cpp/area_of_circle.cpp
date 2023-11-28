#include <iostream>
using namespace std;

int main()
{
  float radius;
  float pi = 3.1415;

  cout << "Enter radius : ";
  cin >> radius;

  float area = pi * radius * radius;

  cout << "The area of circle is " << area << endl;

  return 0;
}