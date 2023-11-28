#include <iostream>
using namespace std;

int main()
{
  float x;
  cin >> x;
  int integer_part = (int)x;
  if (x < 0)
  {
    integer_part--;
  }
  float fractional_part = x - (float)integer_part;
  cout << fractional_part << endl;

  return 0;
}