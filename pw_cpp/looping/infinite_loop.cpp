#include <iostream>
using namespace std;

int main()
{
  // infinite loop is a loop that doesnt have a stopping criteria
  while (true)
  {
    cout << "hello";
  }

  while ('a' < 'b')
  {
    cout << "hello";
  }

  int a = 1;
  while (a = 10)
  {
    cout << a;
    a++;
  }

  // i am telling you dont run this or you are gonna die
  return 0;
}