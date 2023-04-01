// 9b.Program to calculate the triangular number and n value using the while statement
// Program 4.3

#include <stdio.h>

int main (void)

{
    int n, triangularNumber;

    printf ("Table Of Traingular Number\n\n");
    printf ("n    Sum from 1 to n\n");
    printf ("---  ---------------\n");

    triangularNumber = 0;
    n = 1;

    while (n <= 10)

    {
        triangularNumber += n;

        printf ("%2i   %i\n", n, triangularNumber);
        n++;
    }
    return 0;
}