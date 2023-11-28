#include <iostream>
using namespace std;

void fun(int x, int y) // these arguments inside function declaration formal parameters
{
  cout << "address of fun x : " << &x << endl;
  cout << "address of fun y : " << &y << endl;
}
int main()
{
  int x;
  int y;

  cout << "address of main x : " << &x << endl;
  cout << "address of main y : " << &y << endl;
  fun(x, y); // these arguments inside main are called as actual parameters

  return 0;
}