#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  for (int i = 1; i <= (2 * n - 1); i++) // this one straight line is separated
  {
    cout << i;
  }
  cout << endl;
  int m = n - 1;
  for (int i = 1; i <= m; i++)
  {
    int count = 1; // this variable will be used to print numbers
    // we need to declare this here bcz now this will reinitialize with every outer loop run
    for (int j = (m - i + 1); j >= 1; j--)
    {
      cout << count;
      count++;
    }
    for (int k = 1; k <= (2 * i - 1); k++)
    {
      cout << " ";
      count++; // we need to update count here as well bcz we need further numbers like 123 567
      // if we dont add this output will be 123 456 but we need 123 567
    }
    for (int j = (m - i + 1); j >= 1; j--)
    {
      cout << count;
      count++;
    }
    cout << endl;
  }

  return 0;
}