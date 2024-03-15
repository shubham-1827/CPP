#include <iostream>
using namespace std;

void swap_pointer(int *a, int *b)
{
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}

void swap_using_alias(int &a, int &b)
{
  a = a + b;
  b = a - b;
  a = a - b;
}

int main()
{
  int a, b;
  printf("Enter the value of a and b : ");
  scanf("%d %d", &a, &b);

  int *a_ptr = &a, *b_ptr = &b;

  // swap_pointer(a_ptr, b_ptr);
  swap_using_alias(a, b);

  printf("The swapped value of a is %d and b is %d\n", a, b);
  return 0;
}