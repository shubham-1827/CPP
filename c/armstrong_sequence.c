#include <stdio.h>

int main()
{
  int num;
  printf("enter a number : ");
  scanf("%d", &num);

  int count = 0;
  while (num > 0)
  {
    count++;
    num /= 10;
  }
  int n = num;
  int sum = 0;
  while (num > 0)
  {
    int last_digit = num % 10;
    int power = 1;
    for (int j = 0; j < count; j++)
    {
      power *= last_digit;
    }
    sum += power;
    num /= 10;
  }
  if (sum == n)
  {
    printf("%d is an armstrong number\n", n);
  }

  return 0;
}