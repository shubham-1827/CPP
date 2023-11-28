#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    int count = 1; // temporary variable used to track the odd numbers
    for (int j = 1; j <= i; j++)
    {
      cout << count << " ";
      count += 2;
    }
    cout << endl;
  }

  return 0;
}