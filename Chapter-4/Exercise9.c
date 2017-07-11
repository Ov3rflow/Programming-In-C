/* Chapter 4 - Exercise 9
Re-write programs 4.2 - 4.5 to use while loops instead of for loops*/
#include <stdio.h>

int program4_2(void);
int program4_3(void);
int program4_4(void);
int program4_5(void);

int main(void)
{
    program4_2();
    program4_3();
    program4_4();
    program4_5();
}


int program4_2(void)
{
    printf("EXERCISE 4.2\n------------\n");
    int n, TriangularNumber;

    TriangularNumber = 0;

    n = 1;
    while (n <= 200)
    {
        TriangularNumber += n;
        n++;
    }

    printf("The 200th Triangular number is %i\n", TriangularNumber);

    return 0;
}

int program4_3(void)
{
    printf("EXERCISE 4.3\n------------\n");
    int  n, triangularNumber;

    printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf (" n    Sum from 1 to n\n");
    printf ("---   ---------------\n");

    triangularNumber = 0;
    n = 1;

    while (n <= 10)
    {
        triangularNumber +=  n;
        printf (" %i           %i\n", n, triangularNumber);
        n++;
    }

    return 0;
}


int program4_4(void)
{
    printf("EXERCISE 4.4\n------------\n");
    int  n, number, triangularNumber;

    printf ("What triangular number do you want? ");
    scanf  ("%i", &number);

    triangularNumber = 0;
    n = 1;

    while (n <= number)
    {
        triangularNumber += n;
        n++;
    }


    printf ("Triangular number %i is %i\n", number, triangularNumber);

    return 0;
}


int program4_5(void)
{
    printf("EXERCISE 4.5\n------------\n");
    int n, number, TriangularNumber, counter;

    counter = 1;
    while (counter <= 5)
    {
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        TriangularNumber = 0;

        for (n = 1; n <= number; ++n)
        {
            TriangularNumber += n;
        }
        printf("Triangular number %i is %i\n\n", number, TriangularNumber);
        counter++;
    }
    return 0;
}
