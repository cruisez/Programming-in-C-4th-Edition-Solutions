/* 4.The factorial of an integer n, written n!, is the product of the consecutive integers 1 through n. 
For example, 5 factorial is calculated as 5!  =  5 x 4 x 3 x 2 x 1  =  120
Write a program to generate and print a table of the first 10 factorials. */

#include <stdio.h>

int main (void)
{
    long int n, nf;

    nf = 1;
    for (n = 1; n <=10; n++)
    {
        nf = nf * n;

        printf("%li! = %li\n", n, nf);
 
    }
    return 0;

}