/* Chapter 5 - Exercise 6
display given integers in english */
#include <stdio.h>

int print(int digit);
int numLength(int number);


int main(void)
{
    float input;

    printf("Please enter a number: ");
    scanf("%f", &input);

    if (!input)
        printf("Zero");

    else
    {
        int len = numLength((int)input);
        int i;
        int numPosition = 10;

        // loop through each digit in the given integer. from left to right
        for (i = 1; i <= len; i++)
        {
            // cut away all digits to the right of the next digit to grab, starting with the very left.
            while (input >= numPosition)
            {
                input /= 10;
            }
        // now cut away all digits to the left of the next digit to grab
        int digit = (int)input % 10;

        // print the text version of the selected digit
        print((int)digit);

        // restore the original integer for the next loop
        for(int i = 1; i < len; i++)
            input *= 10;

        // change the digit position we search for next (10th, 100th etc)
        numPosition *= 10;
        }

    }
}


/* Get the number of digits in the user supplied integer
    e.g. 1234 will resolve to 4 digits */
int numLength(int number)
{
    int count = 0;

    while (number > 9)
    {
        number /= 10;
        count++;
    }
    return count + 1;
}


/* Print out the word for the digit that has been selected by the main function */
int print(int digit)
{
    switch (digit)
    {
    case 0:
        printf(" Zero");
        break;
    case 1:
        printf(" One");
        break;
    case 2:
        printf(" Two");
        break;
    case 3:
        printf(" Three");
        break;
    case 4:
        printf(" Four");
        break;
    case 5:
        printf(" Five");
        break;
    case 6:
        printf(" Six");
        break;
    case 7:
        printf(" Seven");
        break;
    case 8:
        printf(" Eight");
        break;
    case 9:
        printf(" Nine");
        break;
    }
}
