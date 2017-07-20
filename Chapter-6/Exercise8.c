/* Chapter 6 - Exercise 8
test to see if variable length arrays are usable by my compiler. write a program to test it out */
#include <stdio.h>

int main(void)
{
    int test, i;
    printf("Enter a length for the array\n");
    scanf("%i", &test);

    int array[test];

    for (i = 0; i < 100; ++i)
    {
        array[i] = i * 8;
        printf("%i ", array[i]);
    }
}
