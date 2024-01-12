#include <stdio.h>

int main()
{
  float a, b;
  scanf("%f %f", &a, &b);

  int a_1 = (int)a;
  int b_1 = (int)b;

  int sum = a_1 + b_1;
  printf("Sum: %d\n", sum);

  return 0;
}