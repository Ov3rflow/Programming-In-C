/* Chapter 3 - Exercise 2
    Which variables are invalid/why */
#include <stdio.h>

int main(void)
{
    printf("Int: \t\t\tTechnically fine because it's different to 'int'. But not cool.\n");
    printf("Calloc: \t\tFine, although it is close to the function calloc(), so not cool again\n");
    printf("floating: \t\tFine again, but another terrible name.\n");
    printf("ReInitialize: \t\tIs fine.\n");
    printf("char: \t\t\tDoesn't work. It's a reserved name.\n");
    printf("Xx: \t\t\tIs fine.\n");
    printf("_1312: \t\t\tIs fine. it has an underscore before the numbers.\n");
    printf("_: \t\t\tIs fine. A variable can start with an underscore. and theres no minimum length.\n");
    printf("6_05: \t\t\tDoesn't work. It starts with a number.\n");
    printf("alpha_beta_routine: \tIs fine.\n");
    printf("z: \t\t\tis fine.\n");
    printf("A$: \t\t\tDoesn't work. $ is an illegal character.\n");
}
