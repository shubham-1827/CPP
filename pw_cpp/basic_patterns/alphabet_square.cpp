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
    char letter = 'A';
    for (int j = 1; j <= n; j++)
    {
      cout << letter << " ";
      letter++;
    }
    cout << endl;
  }

  cout << endl;

  // second way
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << (char)(j + 64) << " "; // like if j is 2 j+64 is 66 which is after type casting equals 'B'
    }
    cout << endl;
  }

  return 0;
}