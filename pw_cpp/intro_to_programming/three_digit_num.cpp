#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  if (n >= 100 and n <= 999)
    cout << "yes" << endl;
  else
    cout << "no" << endl;

  return 0;
}