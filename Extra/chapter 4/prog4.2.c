// Program to calculate the triangular number and n value using the for statement

#include <stdio.h>

int main (void)

{
    int n, triangularNumber;

    triangularNumber = 0;

// To Repetitively execute the number

    for (n = 1; n <= 10; n++)

    {
        triangularNumber += n;

        printf ("%-2i   %i\n", n, triangularNumber);
    }
    return 0;
}