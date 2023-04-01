/* 7.Write a program that evaluates the following expression and displays the results 
(remember to use exponential format to display the result): */

#include <stdio.h>

int main (void)

{
    double a;
     a = (3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8);

     printf("(3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8) = %e\n", a);

     return 0;

}