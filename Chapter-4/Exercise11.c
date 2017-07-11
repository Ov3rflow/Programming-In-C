/* Chapter 4 - Exercise 11
Calculate the sum of the digits in an integer */
#include <stdio.h>

int main(void)
{
    int orig_number, number, digit, sum;

    printf("Please enter a number: ");
    scanf("%i", &number);

    orig_number = number;
    sum = 0;

    while (number != 0)
    {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("The sum of all the digits in %i is..\n\n\t%i\n\n", orig_number, sum);

    return 0;
}
