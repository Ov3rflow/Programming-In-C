/* Chapter 5 - Exercise 3
    division to 3 decimal places with zero division error checking */
#include <stdio.h>

int main(void)
{
    int first, second;

    printf("Please enter two integer values: ");
    scanf("%i %i", &first, &second);

    if (first == 0 || second == 0)
        printf("Please stop trying to divide by zero.\n");
    else
        printf("%.3f\n", (float) first / second);

    return 0;
}
