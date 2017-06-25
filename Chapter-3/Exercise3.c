/* Chapter 3 - Exercise 3
    Which constants are invalid/why */

#include <stdio.h>

int main(void)
{
    printf("123.456:\tValid. It is a correct float.\n");
    printf("0001:\t\tValid. It is a correct integer.\n");
    printf("0Xab05:\t\tValid. It is a correct hex integer.\n");
    printf("123.5e2:\tValid. It is a correct scientific notation float.\n");
    printf("98.6F:\t\tValid. It is a explicitly declared float.\n");
    printf("0996:\t\tValid. It is a correct integer.\n");
    printf("1234uL:\t\tValid. it is a correct unsigned long integer.\n");
    printf("0x10.5:\t\tInvalid. Hex floating constants require an exponent.\n");
    printf("0xFFFF:\t\tValid. it is a correct hex integer.\n");
    printf("0L:\t\tValid. It is a correct long integer.\n");
    printf(".0001:\t\tValid. It is a correct floating point.\n");
    printf("98.7U:\t\tInvalid. Floating point constant cannot have the unsigned suffix.\n");
    printf("-12E-12:\tValid. It is a correct scientific notation float.\n");
    printf("1.2Fe-7:\tInvalid. The F suffix cant be used in the middle of scientific notation.\n");
    printf("0x0G1:\t\tInvalid. Hex goes up to F. G doesn't exist.\n");
    printf("123L:\t\tValid. It is a correct long integer.\n");
    printf("-597.25:\tValid. It is a correct floating point.\n");
    printf("+12:\t\tValid. It is correct, but the + seems redundant.\n");
    printf("17777s:\t\tInvalid. s is not a correct suffix.\n");
    printf("07777\t\tValid. It is a correct integer.\n");
    printf("15,000:\t\tInvalid. Commas are not allowed. 15000 would be correct.\n");

    return 0;
}


