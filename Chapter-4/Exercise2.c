/* Chapter 4 - Exercise 2
program to print a table of n and n squared for the range of 1-10*/

#include <stdio.h>

int main(void)
{
    int n, squared;

    printf("n\tn squared\n--\t------\n");

    for (n = 1; n <= 10; n++)
    {
        printf("%i\t%i\n", n, n * n);
    }

    return 0;


}
