#include <stdio.h>

int main (void)

{
    int a = 25, b = 5, c = 10, d = 7;

    

    printf ("a / d = %i\n", a / d);

    printf ("a / d * d = %i\n", a / d * d);

    printf ("a %% d = %i\n", a % d);

    printf ("a / d * d + a %% d = %i\n", a / d * d + a % d);
}