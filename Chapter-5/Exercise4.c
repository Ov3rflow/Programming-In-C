/* Chapter 5 - Exercise 4
    Simple printing calculator */
#include <stdio.h>

int main(void)
{
    float accumulator, entry;
    char operator;

    accumulator = 0;

    while (operator != 'E' && operator != 'e')
    {

        printf("Please enter a number and an operator [+ - * / S E]: ");
        scanf("%f %c", &entry, &operator);

        switch (operator)
        {
        case 'S':
        case 's':
            accumulator = entry;
            printf("%.3f\n", accumulator);
            break;

        case '+':
            accumulator += entry;
            printf("%.3f\n", accumulator);
            break;

        case '-':
            accumulator -= entry;
            printf("%.3f\n", accumulator);
            break;

        case '*':
            accumulator *= entry;
            printf("%.3f\n", accumulator);
            break;

        case '/':
            if (entry == 0)
                printf("ERROR: division by zero.\n");
            else
                accumulator /= entry;
                printf("%.3f\n", accumulator);
            break;
        case 'E':
        case 'e':
            break;
        default:
            printf("Unknown operator!\n");
            break;

        }

    }

    printf("%.3f\nCya!\n", accumulator);

    return 0;

}
