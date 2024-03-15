#include <iostream>
using namespace std;

void space_printer(int a)
{
  // for spaces
  for (int spaces = 1; spaces <= a; spaces++)
  {
    cout << " ";
  }
}

void new_line()
{
  cout << endl;
}

void pattern_printer(int n, char ch)
{
  for (int i = 1; i <= n; i++)
  {
    space_printer(n - i);
    char character = 'A';

    for (int j = 1; j <= 2 * i - 1; j++)
    {
      if (ch == '*')
      {
        cout << "*";
      }
      else if (ch == 'a')
      {
        cout << character;
        character++;
      }
      else
      {
        cout << j;
      }
    }
    new_line();
  }
}

int main()
{
  char ch;
  cout << "Choose the pattern you want to print :";
  cin >> ch;
  int n;
  printf("\nEnter the number of rows: ");
  scanf("%d", &n);

  pattern_printer(n, ch);

  return 0;
}