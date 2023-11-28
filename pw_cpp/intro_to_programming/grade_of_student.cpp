#include <iostream>
using namespace std;

int main()
{
  float percentage;
  cout << "Enter your percentage : ";
  cin >> percentage;

  if (percentage >= 91)
  {
    cout << "Excellent";
  }
  else if (percentage >= 81)
  {
    cout << "Very good";
  }
  else if (percentage >= 71)
  {
    cout << "good";
  }
  else if (percentage >= 61)
  {
    cout << "can do better";
  }
  else if (percentage >= 51)
  {
    cout << "average";
  }
  else if (percentage >= 40)
  {
    cout << "Below average";
  }
  else
  {
    cout << "FAIL";
  }
  cout << endl;

  return 0;
}