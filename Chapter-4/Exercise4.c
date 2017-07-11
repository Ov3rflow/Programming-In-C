/* Chapter 4 - Exercise 4
program to generate factorials for the first 10 integers*/
#include <stdio.h>

int main(void)
{
    int i, factorial;
    int n = 1;

    printf("Number\tFactorial\n");
    printf("------\t---------\n");

    for (i = 1; i <= 10; i++)
    {
        factorial = i;
        n = factorial - 1;
        while (n != 0)
        {
            factorial *= n;
            n--;
        }
        printf("%i\t%i\n", i, factorial);
    }
    return 0;
}
