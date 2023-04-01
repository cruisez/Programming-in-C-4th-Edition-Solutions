//9c. Program 4.4 - Asking the User for Input

#include <stdio.h>

int main (void)

{
    int n, tn, number;

    printf ("Please Enter The Number: ");

    scanf ("%i", &number);

    tn = 0;
    n = 1;

    while (n <= number)
    {
    tn += n;
    n++;
    }
    printf ("The Triangular Number for %i is %i\n", number, tn);

    return 0;
}