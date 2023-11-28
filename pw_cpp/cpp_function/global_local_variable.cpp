#include <iostream>
using namespace std;

int a = 10;

int main()
{

  cout << a << endl; // global variable a will print

  a = 7; // global variable a will change

  cout << a << endl; // global variable a will print , now global a is 7

  int a = 12; // declaring a local variable a

  cout << a << endl; // here due to higher priority of local variable as compared to global , local a will print

  a = 6; // local a will change not global

  cout << a << endl; // local variable a will print

  return 0;
}