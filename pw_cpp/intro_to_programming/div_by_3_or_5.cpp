#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  if (n % 5 == 0 or n % 3 == 0)
  {
    if (n % 5 == 0 and n % 3 == 0)
    {
      cout << "divisible by 15" << endl;
    }
    else if (n % 5 == 0)
    {
      cout << "divisible by 5 only" << endl;
    }
    else if (n % 3 == 0)
    {
      cout << "divisible by 3 only" << endl;
    }
  }
  else
  {
    cout << "not divisible by 5 and 3" << endl;
  }

  return 0;
}