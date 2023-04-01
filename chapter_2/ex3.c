/* Write a program that subtracts the value 15 from 87 and displays the result, 
together with an appropriate message, at the terminal. */

#include <stdio.h>

int main(void)
{
    int value1, value2, sum;

    value1 = 15;
    value2 = 87;

    sum = 15 - 87;

    printf(" The Value Of %i - %i is %i\n", value1, value2, sum);

    return 0;
}