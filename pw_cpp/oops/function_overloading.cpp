#include <iostream>
#include <string>

using namespace std;

class Overload {
 public:
  Overload() {}

  // the function to sum two integers
  int sum(int a, int b) { return a + b; }
  float sum(float a, float b) { return a + b; }
  string sum(string a, string b) { return a + b; }
};

class CalculateArea {
 public:
  CalculateArea() {}

  // calculate the area of rectangle
  float area(float a, float b) { return a * b; }
  // area of the square
  float area(float s) { return s * s; }
};

int main() {
  Overload a;
  cout << a.sum(10, 20) << endl;
  cout << a.sum(12.3f, 21.5f) << endl;
  cout << a.sum(string("shubham "), string("tiwari")) << endl;

  CalculateArea b;
  cout << b.area(10, 32) << endl;
  cout << b.area(23) << endl;

  return 0;
}
