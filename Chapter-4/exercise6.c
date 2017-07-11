/* Chapter 4 - Exercise 6
Compare output of the printf statements*/
#include <stdio.h>

int main(void)
{
    int n, TriangularNumber;

    TriangularNumber = 0;

    for (n=1; n <= 200; n++)
    {
        TriangularNumber += n;
    }

    printf("The 200th Triangular number is %i\n", TriangularNumber);

    printf ("%-2i           %i\n", n -1, TriangularNumber);

    return 0;
}

