#include <stdio.h>

int main(void)
{
    int n, number, TriangularNumber, counter;

    for (counter = 1; counter <= 5; ++ counter)
    {
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        TriangularNumber = 0;

        for (n = 1; n <= number; ++n)
        {
            TriangularNumber += n;
        }
        printf("Triangular number %i is %i\n\n", number, TriangularNumber);
    }
    return 0;
}
