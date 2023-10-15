#include <stdio.h>
#include <conio.h>

int main () {
  int x, y, z, exp;

  printf("enter the value of x : ");
  scanf("%d", &x);
    printf("enter the value of y : ");
  scanf("%d", &y);
    printf("enter the value of z : ");
  scanf("%d", &z);
  printf("\n Before using increment operator");
  printf("\nthe original value of x:%d", x);
  printf("\nthe original value of y:%d", y);
  printf("the original value of z:%d", z);
  
  //use preincrement operator
  exp = x++ + ++x + ++y + y++ + ++z;

  printf("\n\n After using the increment operator : ");
  printf("\nthe result of expresion is :%d", exp);
  printf("\nthe updated value of x :%d", x);
  printf("\nthe updated value of y :%d", y);
  printf("\nthe updated value of z :%d", z);

  return 0;
}