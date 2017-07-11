/* Chapter 4 - Exercise 8
modify program to allow user to choose how many times to loop */
#include <stdio.h>

int main(void)
{
    int n, number, TriangularNumber, counter, upper;

    printf("How many times would you like to calculate Triangular numbers? ");
    scanf("%i", &upper);

    for (counter = 1; counter <= upper; ++ counter)
    {
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        TriangularNumber = 0;

        for (n = 1; n <= number; ++n)
        {
            TriangularNumber += n;
        }
        printf("Triangular number %i is %i\n\n", number, TriangularNumber);
    }
    return 0;
}
