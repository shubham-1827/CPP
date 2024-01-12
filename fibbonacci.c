#include <stdio.h>

int main()
{
  int number;
  scanf("%d", &number);

  int n1 = 0, n2 = 1;
  int n3;
  for (int i = 0; i < number; i++)
  {
    n3 = n1 + n2;
    printf("%d ", n1);
    n1 = n2;
    n2 = n3;
  }
  printf("\n");
}