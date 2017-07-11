/* Chapter 4 - Exercise 5
Make the program easier to read..*/
#include <stdio.h>

int main(void)
{
    int n, two_to_the_n;

    printf("TABLE OF POWERS OF TWO\n\n");
    printf(" n\ttwo to the n\n");
    printf("---\t------------\n");

    two_to_the_n = 1;

    for (n = 0; n <= 10; n++)
    {
        printf("%2i\t%i\n",n, two_to_the_n);
        two_to_the_n *= 2;
    }

    return 0;

}
