/* 8.Write a program to find the next largest even multiple for the following values of i and j:

i        j
356      7
12,258   23
996      4

*/

#include <stdio.h>

int main (void)

{
    int a = 365, b = 7, result_1, result_2, result_3;
    
    int c = 12258, d = 23, e = 996, f = 4;

    result_1 = a + b - a % b;

    result_2 = c + d - c % d;

    result_3 = e + f - e % f;

    printf ("The next largest even multiple of %i and %i is %i\n", 365, 7, result_1);

    printf ("The next largest even multiple of %i and %i is %i\n", 12258, 23, result_2);

    printf ("The next largest even multiple of %i and %i is %i\n", 996, 4, result_3);

    return 0;


}