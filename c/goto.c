#include <stdio.h>

void check_even(int n)
{
    if (n % 2 == 0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }
even:
    printf("the number %d is even\n", n);
    return;
odd:
    printf("the number %d is odd\n", n);
    return;
}

void print_num(int n)
{
    int i = 1;
label:
    printf("%d\n", i);
    i++;
    if (i <= n)
    {
        goto label;
    }
}
int main()
{
    int a = 10;
    int b = 20;

    printf("%d", a + b);
}