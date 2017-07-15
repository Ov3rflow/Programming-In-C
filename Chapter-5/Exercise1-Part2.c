/* program to calculate the average of a set of grades and count
the number of failing test grades */
#include <stdio.h>

int main(void)
{
    int NumberOfGrades, i, grade;
    int GradeTotal = 0;
    int FailureCount = 0;
    float average;

    printf("How many grades will you be entering? ");
    scanf("%i", &NumberOfGrades);

    for (i = 1; i <= NumberOfGrades; ++i)
    {
        printf("Enter grade#%i:", i);
        scanf("%i", &grade);

        GradeTotal += grade;

        if (grade < 65)
            ++FailureCount;
    }

    average = (float) GradeTotal / NumberOfGrades;

    printf("\nGrade average = %.2f\n", average);
    printf("Number of failures = %i\n", FailureCount);

    return 0;
}
