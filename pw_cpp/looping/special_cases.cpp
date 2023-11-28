#include <iostream>
using namespace std;

int main()
{
  int a = 10;
  while (a /= 2) // a = a / 2
  {
    cout << "hello" << endl;
  }

  // this will print hello 3 times,
  //  first when a becomes 5 , then a becomes 1 , then , a becomes 0

  return 0;
}