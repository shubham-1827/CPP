#include <iostream>
using namespace std;

int main()
{
  // while loop is an alternative to for loop,
  // any task that you do with for loop you can also do that with while loop and vice versa

  // you can use while loop when you get some ajeeb si condition or you want to run the loop only when some variable is
  // true/false like
  /*
  bool a = true;
  while (a == true) {
    code ....
  }
  */

  int n;
  cin >> n;

  int i = 1;
  while (i <= n)
  {
    cout << i << " ";
    i++;
  }
  cout << endl;

  return 0;
}