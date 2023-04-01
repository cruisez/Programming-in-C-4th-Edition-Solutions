/* Program to find the greatest common divisor
          of two nonnegative integer values */

#include <stdio.h>

int main (void)
{
    int u, v, temp;

    printf("Please Enter two non negative number\n");

    scanf("%i%i", &u, &v);

    while(v !=0)
    {
        temp = u % v;
        u = v;
        v = temp;

    }    

        printf("Their Commom Divisor is %i\n", u);

        return 0;
    
}