// Program to implement the sign function

#include <stdio.h>

int main (void)
{
    int number, sign;

    printf ("Enter you number: ");
    scanf ("%i", &number);

    if (number == 0)
    sign = 0;

    else if (number < 0)
    sign = -1;

    else
    sign = 1;

    printf ("Sign = %i\n", sign);

    return 0;
}