/*  Chapter 6 - Exercise 6
Modify exercise 1 part 3 to use variables instead of arrays */
#include <stdio.h>

int main(void)
{
    int fib, lastnum, lastlastnum, i;

    lastlastnum = 0; //By definition
    lastnum = 1; //ditto

    printf("%i %i ", lastlastnum, lastnum);

    for (i = 2; i < 15; ++i)
    {
        fib = lastnum + lastlastnum;
        printf("%i ", fib);
        lastlastnum = lastnum;
        lastnum = fib;
    }

    return 0;
}
