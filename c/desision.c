#include <stdio.h>

int main()
{
    // defining a variable
    int n = 20;

    if (n > 10)
    {
        //\n is the escape sequence used to print the new line
        printf("inside if block\n");
        printf("n is greater than 10\n");
    }
    printf("outside if block\n");

    return 0;
}