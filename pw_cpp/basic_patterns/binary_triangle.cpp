/*
input : 4
output :
  1
  0 1
  1 0 1
  0 1 0 1
*/
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  // first way
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if (j % 2 == 0 and i % 2 != 0)
      {
        cout << 0;
      }
      else if (j % 2 != 0 and i % 2 == 0)
      {
        cout << 0;
      }
      else
      {
        cout << 1;
      }
    }
    cout << endl;
  }

  // second way
  int count = 0;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0) // yeh check karega ki start 0 se hoga yaa 1 se
      count = 0;
    else
      count = 1;
    for (int j = 1; j <= i; j++)
    {
      cout << count;

      // flipping count
      if (count == 1)
        count = 0;
      else
        count = 1;
    }
    cout << endl;
  }

  // third way
  // using the property - when both odd adds or both even adds - sum is always even (sum%2==0)
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if ((i + j) % 2 == 0) // rows or column ka sum even hai toh vahi per 1 print ho raha hai(op observation bolte)
      {
        cout << 1;
      }
      else
      {
        cout << 0;
      }
    }
    cout << endl;
  }
  return 0;
}