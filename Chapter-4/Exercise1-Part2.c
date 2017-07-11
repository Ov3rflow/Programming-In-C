/* program to calculate the 200th triangular number
introduction of the for statement*/
#include <stdio.h>

int main(void)
{
    int n, TriangularNumber;

    TriangularNumber = 0;

    for (n=1; n <= 200; n++)
    {
        TriangularNumber += n;
    }

    printf("The 200th Triangular number is %i\n", TriangularNumber);

    return 0;
}
