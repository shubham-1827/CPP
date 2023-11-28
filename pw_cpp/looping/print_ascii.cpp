#include <iostream>
using namespace std;

int main()
{

  // first way
  char ch = 'A';

  for (int i = 1; i <= 26; i++)
  {
    cout << ch << " : " << (int)ch << endl;
    ch++;
  }

  cout << endl;

  // second way
  for (int i = 65; i <= 90; i++)
  {
    cout << (char)i << " : " << i << endl;
  }

  cout << endl;

  // third way
  ch = 'A';
  while (ch != 'Z' + 1)
  {
    cout << ch << " : " << (int)ch << endl;
    ch++;
  }

  // fourth way
  ch = 'A';

  do
  {
    cout << ch << " : " << (int)ch << endl;
    ch++;
  } while (ch <= 'Z');

  return 0;
}
