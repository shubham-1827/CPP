#include <stdio.h>

void swap_pointer(int *a, int *b)
{
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}
int main()
{
  int a, b;
  printf("Enter the value of a and b : ");
  scanf("%d %d", &a, &b);

  int *a_ptr = &a, *b_ptr = &b;

  swap_pointer(a_ptr, b_ptr);

  printf("The swapped value of a is %d and b is %d\n", a, b);
  return 0;
}