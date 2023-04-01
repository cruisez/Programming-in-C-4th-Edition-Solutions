// Asking the User for Input

#include <stdio.h>

int main (void)

{
    int n, tn, number;

    printf ("Please Enter The Number: ");

    // Asks User for Input

    scanf ("%i", &number);

    tn = 0;

    for (n = 1; n <= number; n++)

    tn += n;

    printf ("The Triangular Number for %i is %i\n", number, tn);

    return 0;
}