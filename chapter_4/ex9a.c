/* 9a.Rewrite Programs 4.2 through 4.5, replacing all uses of the for statement with equivalent while statements. 
Run each program to verify that both versions are identical.*/

// Program to calculate the 200th triangular number using the while statement

// Program 4.2

#include <stdio.h>

int main (void)

{
    int n, triangularNumber;

    triangularNumber = 0;
    n = 1;

    while (n <= 200)
    {
    
    triangularNumber += n;
    n++;
    }
    printf ("The Traingular Number is %i\n",triangularNumber );
    
    return 0;
}