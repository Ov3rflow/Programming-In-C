/* Chapter 3 - Exercise 7
    Expression evalutation */
#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;

    a = 3.31 * pow(10,-8) * 2.01 * pow(10, -7);
    b = 7.16 * pow(10, -6) + 2.01 * pow(10, -8);

    printf("The answer is: %e", a / b);

    return 0;
}
