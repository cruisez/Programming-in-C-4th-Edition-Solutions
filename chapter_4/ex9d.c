// 9d. Program 4.5

#include <stdio.h>

int main (void)
{
    int n, number, tn, counter;
   
    counter = 1;
    tn = 0;
    n = 1;

    while (counter <=5)
    {
        printf("What triangular number do you want? ");
        scanf("%i", &number);
     
        while (n <= number)
        {
        tn += n;
        n++;
        }
     
        printf("Triangular number %i is %i\n\n", number, tn);
        counter++;
    }

    return 0;
}