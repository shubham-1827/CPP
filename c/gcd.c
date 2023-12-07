#include <stdio.h>

int main()
{
    int a, b, gcd;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        gcd = b;
    }
    else
    {
        gcd = a;
    }
    for (int i = gcd; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
            printf("%d\n", gcd);
            break;
        }
    }
}