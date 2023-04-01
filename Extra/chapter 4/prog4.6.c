// Program to reverse the digits of a number

#include <stdio.h>

int main (void)
{
    int number, right_digit;
    
    printf("Please Enter Your Number\n");

    scanf("%i", &number);

    while (number != 0)
    {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;
    }
    // To print on new line.
    printf("\n");
    return 0;
}