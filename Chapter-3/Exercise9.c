/* Chapter 3 - Exercise 9
    write a program - round off to next even multiple*/
#include <stdio.h>

int next_multiple(i, j);

int main(void)
{
    // Formula is: i + j - i % j
    printf("1. 256,7 = %i\n", next_multiple(256, 7));
    printf("2. 365,7 = %i\n", next_multiple(365, 7));
    printf("3. 12,258, 23 = %i\n", next_multiple(12258, 23));
    printf("4. 996,4 = %i\n", next_multiple(996,4));


}

int next_multiple(i, j)
{
    return i + j - i % j;
}
