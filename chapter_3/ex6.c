/* 6.Write a program to evaluate the polynomial shown here:
3X^3 - 5X^2 + 6, for X = 2.55 */

#include <stdio.h>

int main (void)

{
    double x = 2.55, y;

    y = 3 * x * x * x - 5 * x *x + 6;

    printf("Answer is %g\n", y);

    return 0;
}