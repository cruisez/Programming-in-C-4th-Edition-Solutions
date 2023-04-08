/*Write a program that accepts two integer values typed in by the user.
Display the result of dividing the first integer by the second, to three-decimal-place accuracy.
Remember to have the program check for division by zero.*/

#include <stdio.h>

int main(void)
{
    int value1, value2;
    float answer;
    char operator;

    printf("Enter your values\n");
    scanf("%i %c %i", &value1, &operator, & value2);

    if (operator == '/')

    {

        if (value2 == 0 || value1 == 0)
            printf("Cannot divide by zero\n");

        else
            answer = (float)value1 / value2;
        printf("%i divided by %i is %.3f\n", value1, value2, answer);
    }
    else
        printf("Unknown operator\n");

    return 0;
}