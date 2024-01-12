#include <iostream>
using namespace std;
int main()
{
  int number = -4;
  char result;
  result = number > 0 ? 'P' : 'N'; // both are in char so ternary operator output will all be in char
  cout << result << endl;          // N
  return 0;
}

// output : N