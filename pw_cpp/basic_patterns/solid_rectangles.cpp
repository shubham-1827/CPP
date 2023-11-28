// input : 5 3
// output :
/*
 *****
 *****
 *****
 */
#include <iostream>
using namespace std;

int main()
{
  int l, b; // l = no. of columns, b = no. of rows
  cout << "Enter length and breadth : ";
  cin >> l >> b;

  for (int i = 1; i <= b; i++)
  {
    for (int j = 1; j <= l; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }

  return 0;
}