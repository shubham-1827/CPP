// WAP to find the difference between ASCII of two characters ,take them as input .
#include <iostream>
using namespace std;

int main()
{
  char ch_1, ch_2;

  cout << "Enter two characters : ";
  cin >> ch_1 >> ch_2;

  int difference = (int)ch_1 - (int)ch_2;

  cout << difference << endl;

  return 0;
}