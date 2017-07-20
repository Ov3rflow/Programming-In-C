/* Chapter 6 - Exercise 4
calculate the average of a 10 element array */
#include <stdio.h>

int main(void)
{
    float array[10];
    int i;
    float total = 0;

    printf("Please enter ten numbers\n");

    for (i = 0; i < 10; ++i)
    {
        scanf("%f", &array[i]);
        total += array[i];
    }

    printf("The average of all entered numbers is: %.1f\n\n", total / 10);

    return 0;
}
