/* 8.Program 4.5 allows the user to type in only five different numbers. 
Modify that program so that the user can type in the number of triangular numbers to be calculated.*/

#include <stdio.h>

int main (void)
{
    int n, number, tn, counter, usrin;

    printf("How Many Traingular number do you want to calculate: ");
    scanf("%i", &usrin);

    for (counter = 1; counter <= usrin; counter++)
    {
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        tn = 0;

        for(n = 1; n <= number; n++)
        tn += n;

        printf("Triangular number %i is %i\n\n", number, tn);
    }

    return 0;
}