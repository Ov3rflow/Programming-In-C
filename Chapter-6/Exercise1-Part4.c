/* Chapter 6 - Exercise 1 Part 4 */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int p, i, primes[50], primeindex = 2;
    bool isPrime;

    primes[0] = 2;
    primes[1] = 3;

    for (p = 5; p <= 50; p += 2)
    {
        isPrime = true;

        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
            if (p % primes[i] == 0)
                isPrime = false;

        if (isPrime = true)
        {
            primes[primeindex] = p;
            ++primeindex;
        }
    }

    for (i = 0; i < primeindex; ++i)
        printf("%i ", primes[i]);

    printf("\n");

    return 0;
}
