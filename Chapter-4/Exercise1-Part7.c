/* Program to find the greatest common divisor
of two nonnegative numbers */

#include <stdio.h>

int main(void)
{
    int u, v, temp;

    printf("Please type in two nonnegative numbers\n");
    scanf("%i%i", &u, &v);

    while (v!=0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }

    printf("Their greatest common divisor is %i\n", u);

    return 0;
}
