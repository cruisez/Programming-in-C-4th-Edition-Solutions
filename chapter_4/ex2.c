/* 2.Write a program to generate and display a table of n and n^2, for integer values of n ranging from 1 to 10. 
Be certain to print appropriate column headings. */

#include <stdio.h>

int main (void)
{
    int n, n2;

   printf("n    n^2\n");

   for (n = 1; n <= 10; n++)
   {

    n2 = n * n;

     printf("%2i   %i\n",  n, n2);

   }
   
   return 0;

}