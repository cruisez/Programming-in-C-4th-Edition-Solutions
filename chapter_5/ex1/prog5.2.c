// 2. Program to calculate the average of a set of grades and count the number of failing test grades.

#include <stdio.h>

int main (void)
{
    int numberofgrades, i, grade;
    int gradetotal = 0;
    int failurecount = 0;
    float average;

    printf ("How many grades will you be entering? ");
    scanf("%i", &numberofgrades);

    for (i = 1; i <= numberofgrades; i++)
    {
        printf ("Enter Grade #%i: ", i);
        scanf ("%i", &grade);

        gradetotal = gradetotal + grade;

        if (grade < 65)
        failurecount++;
    }

    //Converting gradetotal to floating point using type cast operator
    average = (float) gradetotal / numberofgrades;

    printf ("\nGrade Total = %i\n", gradetotal);
    printf ("Grade average = %.2f\n", average);
    printf ("Number of failures = %i\n", failurecount);

    return 0;

}