#include <iostream>
using namespace std;

void fun1(int x, int y)
{
  cout << "x = " << x << ", y = " << y << endl;
}

void fun(int x = 5, float y = 2.5, bool z = true)
// default values are used if you dont want to pass all arguments in all function calls
{
  cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
}

int main()
{
  fun1(3, 6);
  // fun1(3); this will generate an error, if you dont declare default values then you must pass all arguments
  fun();            // this will print all default values
  fun(2);           // x = 2, y = default, z = default
  fun(2, 3, false); // x = 2, y = 3, z = false
  fun(false);       // x = 0, y = default, z = default, priority ke hisab se assignment hota hai so pehle x then y then z
  fun(2.3);         // x = 2 ,y and z default,  implicit conversion happens
  fun(2, 4.2);      // x = 2, y = 4.2, z = default
  fun(7, true);     // x= 7, y = 1, z = default
}