#include <iostream>

using namespace std;

int rem(int a, int b);
float area_of_circle(float r);
float simple_interest(float p, float r, float t);
int alphabet_position(char ch);
float fractional_part(float n);

int main() {
  // int a, b;
  // cin >> a >> b;

  // cout << rem(a, b) << endl;

  // float r;
  // cin >> r;
  // cout << area_of_circle(r) << endl;

  // float p, r, t;
  // cin >> p >> r >> t;
  // cout << simple_interest(p, r, t) << endl;

  // char ch;
  // cin >> ch;
  // cout << alphabet_position(ch) << endl;

  float n;
  cin >> n;
  cout << fractional_part(n) << endl;

  return 0;
}

int rem(int a, int b) { return (a - b * (a / b)); }

float area_of_circle(float r) { return 3.14 * r * r; }

float simple_interest(float p, float r, float t) { return (p * r * t) / 100; }

int alphabet_position(char ch) { return ch - 64; }

float fractional_part(float n) {
  float fraction = n - (int)n;
  if (n < 0) {
    fraction = 1 + fraction;
  }
  return fraction;
}
