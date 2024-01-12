#include <stdio.h>
long long int factorial(int n)
{
    long long int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
long long int factorial_recursion(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial_recursion(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld\n", factorial(n));
    printf("%lld", factorial_recursion(n));
    return 0;
}