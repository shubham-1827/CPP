#include <iostream>
#define PI 3.141532

using namespace std;

float simple_interest(float principal, float rate, float time) {
  return (principal * rate * time) / 100;
}

float fractional_part(float x) {
  float fract_part = x - (int)x;
  if ( fract_part < 0 ) {
    fract_part = 1 + fract_part;
  }
  return fract_part;
}

float half_of_a_number(float n) { return n / 2; }

float square_of_a_number(float n) { return n * n; }

float area_of_circle(float radius) { return PI * radius * radius; }

float volume_of_sphere(float radius) {
  return (4 / 3.0) * PI * radius * radius * radius;
}

int location_of_alphabet(char alphabet) {
  if ( alphabet >= 'A' and alphabet <= 'Z' ) {
    return alphabet - 64;
  }
  else {
    return -1;
  }
}

int main() {
  float n;
  cin >> n;

  cout << area_of_circle(n) << endl;
  cout << volume_of_sphere(n) << endl;

  char ch;
  cin >> ch;
  cout << location_of_alphabet(ch) << endl;
  cout << fractional_part(n) << endl;

  return 0;
}
