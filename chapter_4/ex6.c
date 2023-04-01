/* 6. A minus sign placed in front of a field width specification causes the field to be displayed left-justified. 
Substitute the following printf() statement for the corresponding statement in Program 4.2, 
run the program, and compare the outputs produced by both programs.
*/

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