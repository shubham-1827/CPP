#include <stdio.h>
int main()
{
  int age;
  scanf("%d", &age);

  if (age < 18)
  {
    printf("sorry bro you cant vote");
  }
  else
  {
    printf("yes you can vote man");
  }
  return 0;
}