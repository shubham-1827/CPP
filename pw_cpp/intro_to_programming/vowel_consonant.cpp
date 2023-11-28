#include <iostream>
using namespace std;

int main()
{
  char ch;
  cout << "Enter a character : ";
  cin >> ch;

  int ascii_value = (int)ch;
  if ((ascii_value > 64 and ascii_value < 91) or (ascii_value > 96 and ascii_value < 123))
  {
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
      cout << "the given alphabet is a vowel" << endl;
    }
    else
    {
      cout << "the given alphabet is a consonant" << endl;
    }
  }
  else
  {
    cout << "its not an alphabet, so no vowel and consonant shit." << endl;
  }
}