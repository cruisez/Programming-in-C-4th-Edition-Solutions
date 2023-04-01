/* 11. Write a program that calculates the sum of the digits of an integer. 
For example, the sum of the digits of the number 2155 is 2 + 1 + 5 + 5 or 13. 
The program should accept any arbitrary integer typed in by the user.*/

#include <stdio.h>

int main(void) 
{
    long int sum, n;

    printf("Enter your number: ");
    scanf ("%li", &n);

    sum = 0;

    while (n != 0) 
    {
        sum = sum + n % 10;
        n /= 10;
    }

    printf("The sum of the digits of the given integer is: %li\n", sum);

    return 0;
}