/*Write a program that asks the user to type in two integer values at the terminal. 
Test these two numbers to determine if the first is evenly divisible by the second, 
and then display an appropriate message at the terminal.*/

#include <stdio.h>

int main (void)
{
    int number1, number2, ans;
    

    printf("Enter your numbers\n");
    scanf("%i %i", &number1, &number2);

    ans = number1 % number2;

    if (ans == 0)
    printf("The numbers are evenly divisible\n");

    else
    printf("The Numbers are not evenly divisible\n");

    return 0;
}
