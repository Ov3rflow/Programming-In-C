// Program to determine whether a number is odd or even
#include <stdio.h>

int main(void)
{
    int number_to_test, remainder;

    printf("Enter the number you would like to test:");
    scanf("%i", &number_to_test);

    remainder = number_to_test % 2;

    if (remainder == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");

    return 0;
}
