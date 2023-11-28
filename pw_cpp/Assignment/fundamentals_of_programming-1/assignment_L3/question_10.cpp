#include <iostream>
using namespace std;

int main()
{
  int a = 500, b, c;
  if (a >= 400)
    b = 300; // this is inside if , so condition is true , therefore b = 300
  c = 200;   // this is outside if , it works every time
  cout << "value of b and c are respectively " << b << " and " << c;
  return 0;
}
