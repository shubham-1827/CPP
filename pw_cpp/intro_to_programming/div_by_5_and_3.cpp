#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  if (n % 5 == 0 and n % 3 == 0)
  {
    cout << "Divisible";
  }
  else
  {
    cout << "Not divisible";
  }
  cout << endl;

  return 0;

  // in case of and(&&), if condition 1 is false then compiler wont check for condition 2 and declare the result false
  // in case of or(||), if condition 1 is true then compiler wont check for condition 2 and declare the result true
}