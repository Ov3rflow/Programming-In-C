/* Chapter 4 - Exercise 3
triangularNumber = n (n + 1) / 2
Program to find the triangular number of every 5th number between 5 and 50*/
#include <stdio.h>

int main(void)
{
    int n;

    printf("integer\tTriangular Number\n");
    printf("-------\t-----------------\n");

    for (n = 5; n <= 50; n++)
    {
        if (n % 5 == 0);
            printf("%i\t%i\n",n, (n * (n + 1) / 2));
    }
}
