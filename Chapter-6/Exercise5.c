/* Chapter 6 - Exercise 5

What does the following program do..

----------------------------------------------------------
#include <stdio.h>

int main (void)
{
    int numbers[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int  i, j;

    for ( j = 0;  j < 10;  ++j )
        for ( i = 0;  i < j;  ++i )
            numbers[j]  +=  numbers[i];

    for ( j = 0;  j < 10;  ++j )
        printf ("%i ", numbers[j]);

    printf ("\n");

    return 0;
}
-----------------------------------------------------------
*/
#include <stdio.h>

int main(void)
{
    printf("The program counts from 1 to 10 and prints out the sum of all previous numbers as it goes\n\n");

    return 0;
}
