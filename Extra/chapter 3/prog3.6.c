#include <stdio.h>

int main (void)

{
    int a = 365, b = 7, result_1, result_2, result_3;
    
    int c = 12258, d = 23, e = 996, f = 4;

    result_1 = a + b - a % b;

    result_2 = c + d - c % d;

    result_3 = e + f - e % f;

    printf ("result_1 = %i\n", result_1);

    printf ("result_2 = %i\n", result_2);

    printf ("result_3 = %i\n", result_3);


}