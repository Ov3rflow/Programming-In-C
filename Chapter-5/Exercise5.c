/* Chapter 5 - Exercise 5
Program to reverse the digits of a number properly this time */
#include <stdio.h>

int invert_it(number);

int main(void)
{
    int number;

    printf("Enter your number\n");
    scanf("%i", &number);

    if (number < 0)
    {
        number = number - (number * 2);
        invert_it(number);
        printf("-");
    }
    else
        invert_it(number);

    printf("\n");

    return 0;

}

int invert_it(number)
{
    int right_digit;

    do
    {
        right_digit = number % 10;
        printf("%i", right_digit);
        number /= 10;

    }
    while (number != 0);

    return 0;
}
