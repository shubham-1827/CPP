#include <iostream>
using namespace std;

int main()
{
  cout << "Enter a number : ";
  int n;
  cin >> n;

  if (n % 5 == 0)
  {
    cout << "divisible";
  }
  else
  {
    cout << "not divisible";
  }
  cout << endl;

  return 0;
}