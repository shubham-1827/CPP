#include <stdio.h>

void space_printer(int a)
{
  // for spaces
  for (int spaces = 1; spaces <= a; spaces++)
  {
    printf(" ");
  }
}

void new_line()
{
  printf("\n");
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
        printf("*");
      }
      else if (ch == 'a')
      {
        printf("%c", character);
        character++;
      }
      else
      {
        printf("%d", j);
      }
    }
    new_line();
  }
}

int main()
{
  char ch;
  printf("Choose the pattern you want to print : ");
  scanf("%c", &ch);
  int n;
  printf("\nEnter the number of rows: ");
  scanf("%d", &n);

  pattern_printer(n, ch);

  return 0;
}