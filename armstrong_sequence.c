#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n; ++i)
  {
    int num = i;
    int count = 0;
    while (num > 0)
    {
      count++;
      num /= 10;
    }
    num = i;
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
    if (sum == i)
    {
      printf("%d\n", i);
    }
  }
  return 0;
}