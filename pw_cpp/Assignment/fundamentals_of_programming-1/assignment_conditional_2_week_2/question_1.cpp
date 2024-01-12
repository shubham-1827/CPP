// Write a program to count the minimum number of notes in a given amount using the switch statement.
// Input 1 : 510
// Output 1 : notes of “500” = 1 and notes of “10” = 1

#include <iostream>
using namespace std;

int main()
{
  char more = 'Y';
  do
  {
    int amount;
    cout << "Enter the amount : ";
    cin >> amount;
    int current_note = 2000;
    int no_of_notes = 0;
    switch (current_note)
    {
    case 2000:
      no_of_notes = amount / 2000;
      if (amount >= 2000)
      {
        cout << "Notes of \"2000\" = " << no_of_notes << endl;
        amount %= 2000;
      }
    case 500:
      no_of_notes = amount / 500;
      if (amount >= 500)
      {
        cout << "Notes of \"500\" = " << no_of_notes << endl;
        amount %= 500;
      }
    case 200:
      no_of_notes = amount / 200;
      if (amount >= 200)
      {
        cout << "Notes of \"200\" = " << no_of_notes << endl;
        amount %= 200;
      }
    case 100:
      no_of_notes = amount / 100;
      if (amount >= 100)
      {
        cout << "Notes of \"100\" = " << no_of_notes << endl;
        amount %= 100;
      }
    case 50:
      no_of_notes = amount / 50;
      if (amount >= 50)
      {
        cout << "Notes of \"50\" = " << no_of_notes << endl;
        amount %= 50;
      }
    case 20:
      no_of_notes = amount / 20;
      if (amount >= 20)
      {
        cout << "Notes of \"20\" = " << no_of_notes << endl;
        amount %= 20;
      }
    case 10:
      no_of_notes = amount / 10;
      if (amount >= 10)
      {
        cout << "Notes of \"10\" = " << no_of_notes << endl;
        amount %= 10;
      }
    case 5:
      no_of_notes = amount / 5;
      if (amount >= 5)
      {
        cout << "Coins of \"5\" = " << no_of_notes << endl;
        amount %= 5;
      }
    case 2:
      no_of_notes = amount / 2;
      if (amount >= 2)
      {
        cout << "Coins of \"2\" = " << no_of_notes << endl;
        amount %= 2;
      }
    case 1:
      no_of_notes = amount / 1;
      if (amount >= 1)
      {
        cout << "Coins of \"1\" = " << no_of_notes << endl;
        amount %= 1;
      }
    default:
      break;
    }
    cout << "Want to try for another amount ? ";
    cin >> more;
  } while (more == 'Y' or more == 'y');
}