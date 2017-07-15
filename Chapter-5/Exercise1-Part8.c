/* Program to evaluate simple expressions in the form of
    number operator number */
#include <stdio.h>

int main(void)
{
    float value1, value2;

    char operator;

    printf("Type in your expression.\n");
    scanf("%f %c %f", &value1, &operator, &value2);

    if (operator == '+')
        printf("%.2f", value1 + value2);
    if (operator == '-')
        printf("%.2f", value1 - value2);
    if (operator == '*')
        printf("%.2f", value1 * value2);
    if (operator == '/')
        printf("%.2f", value1 / value2);

    return 0;
}
