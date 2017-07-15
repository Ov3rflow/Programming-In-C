/* Chapter 5 - Exercise 2
Get 2 numbers, evaluate if they first is evenly divisible by the second */
#include <stdio.h>

int main(void)
{
    int first, second;

    printf("Please enter two integer values: ");
    scanf("%i %i", &first, &second);

    if (first % second == 0)
        printf("%i evenly divisible by %i.\n", first, second);
    else
        printf("%i not divisible by %i.\n", first, second);

    return 0;
}
